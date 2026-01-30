#ifndef ESPNOW_CONFIG_H
#define ESPNOW_CONFIG_H

#include <esp_now.h>
#include <WiFi.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <freertos/queue.h>

// Data structure for ESP-NOW messages
typedef struct struct_message {
    int total;
    int battery;
    int cup;
    int headset;
} struct_message;

// Global variables
extern struct_message incomingData;
extern struct_message outgoingData;
extern QueueHandle_t espnowReceiveQueue;
extern QueueHandle_t espnowSendQueue;
extern SemaphoreHandle_t lvglMutex;
extern uint8_t senderMacAddress[6];
extern bool senderMacRegistered;

// Function declarations
void initESPNOW();
void onDataRecv(const uint8_t *mac, const uint8_t *incomingDataPtr, int len);
void onDataSent(const uint8_t *mac_addr, esp_now_send_status_t status);
void espnowReceiveTask(void *parameter);
void espnowSendTask(void *parameter);
void lvglUpdateTask(void *parameter);
bool sendMessageToSender(int total, int battery, int cup, int headset);

#endif // ESPNOW_CONFIG_H