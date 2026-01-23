#ifndef ESPNOW_CONFIG_H
#define ESPNOW_CONFIG_H

#include <esp_now.h>
#include <WiFi.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <freertos/queue.h>

// Define the data structure for ESP-NOW messages
// typedef struct struct_message {
//     int intValue;
//     int intValue2;
//     char stringValue[32];
//     float floatValue;
// } struct_message;

typedef struct struct_message {
    int total;
    int battery;
    int cup;
    int headset;
} struct_message;


// Global variables
extern struct_message incomingData;
extern QueueHandle_t espnowQueue;
extern SemaphoreHandle_t lvglMutex;

// Function declarations
void initESPNOW();
void onDataRecv(const uint8_t *mac, const uint8_t *incomingDataPtr, int len);
void espnowTask(void *parameter);
void lvglUpdateTask(void *parameter);

#endif // ESPNOW_CONFIG_H