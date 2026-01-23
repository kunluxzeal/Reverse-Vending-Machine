#include "espnow_config.h"
#include "GUI.h"

// Global variables
struct_message incomingData;
QueueHandle_t espnowQueue;
SemaphoreHandle_t lvglMutex;

// Callback function that will be executed when data is received
void onDataRecv(const uint8_t *mac, const uint8_t *incomingDataPtr, int len) {
    struct_message tempData;
    memcpy(&tempData, incomingDataPtr, sizeof(tempData));
    
    // Send data to queue for processing
    xQueueSend(espnowQueue, &tempData, portMAX_DELAY);
    
    Serial.print("Data received - Int: ");
    Serial.print(tempData.total);
    Serial.print("Data received - Int2: ");
    Serial.print(tempData.battery);
    Serial.print(" Cup: ");
    Serial.print(tempData.cup);
    Serial.print(" Headset: ");
    Serial.println(tempData.headset);
}

// Initialize ESP-NOW
void initESPNOW() {
    // Set device as a Wi-Fi Station
    WiFi.mode(WIFI_STA);
    
    Serial.print("MAC Address: ");
    Serial.println(WiFi.macAddress());
    
    // Init ESP-NOW
    if (esp_now_init() != ESP_OK) {
        Serial.println("Error initializing ESP-NOW");
        return;
    }
    
    Serial.println("ESP-NOW Initialized Successfully");
    
    // Register callback function
    esp_now_register_recv_cb(onDataRecv);
    
    // Create queue for ESP-NOW data
    espnowQueue = xQueueCreate(10, sizeof(struct_message));
    
    // Create mutex for LVGL thread safety
    lvglMutex = xSemaphoreCreateMutex();
}

// Task to handle ESP-NOW received data
void espnowTask(void *parameter) {
    struct_message receivedData;
    
    while (1) {
        // Wait for data from queue
        if (xQueueReceive(espnowQueue, &receivedData, portMAX_DELAY) == pdTRUE) {
            // Copy to global variable
            if (xSemaphoreTake(lvglMutex, portMAX_DELAY) == pdTRUE) {
                memcpy(&incomingData, &receivedData, sizeof(struct_message));
                xSemaphoreGive(lvglMutex);
            }
            
            Serial.println("Data processed by ESP-NOW task");
        }
        
        vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}

// Task to update LVGL UI with received data
void lvglUpdateTask(void *parameter) {
    char buffer[64];
    
    while (1) {
        // Take mutex before accessing shared data and UI
        if (xSemaphoreTake(lvglMutex, portMAX_DELAY) == pdTRUE) {
            
            // Example: Update a label with integer value
            // Replace GUI_Label__screen__Niara with your actual label variable
            if (GUI_Label__screen_1__label_6 != NULL) {
                snprintf(buffer, sizeof(buffer), "%d", incomingData.cup);
                lv_label_set_text(GUI_Label__screen_1__label_6, buffer);
                lv_label_set_text(GUI_Label__screen_2__label_23,buffer);
            }
            
            if (GUI_Label__screen_1__label_7 != NULL) {
                snprintf(buffer, sizeof(buffer), "%d", incomingData.battery);
                lv_label_set_text(GUI_Label__screen_1__label_7, buffer);
                lv_label_set_text(GUI_Label__screen_2__label_24, buffer);
            }
            // // Example: Update another label with string value
            // if (GUI_Label__screen__label_1 != NULL) {
            //     lv_label_set_text(GUI_Label__screen__label_1, incomingData.stringValue);
            // }
            
            // // Example: Update another label with float value
            // if (GUI_Label__screen__label_2 != NULL) {
            //     snprintf(buffer, sizeof(buffer), "%.2f", incomingData.floatValue);
            //     lv_label_set_text(GUI_Label__screen__label_2, buffer);
            // }
            
            xSemaphoreGive(lvglMutex);
        }
        
        vTaskDelay(100 / portTICK_PERIOD_MS);  // Update UI every 100ms
    }
}