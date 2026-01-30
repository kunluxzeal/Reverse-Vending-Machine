// #include "espnow_config.h"
// #include "GUI.h"

// // Global variables
// struct_message incomingData;
// struct_message outgoingData;
// QueueHandle_t espnowReceiveQueue;
// QueueHandle_t espnowSendQueue;
// SemaphoreHandle_t lvglMutex;
// uint8_t senderMacAddress[6];
// bool senderMacRegistered = false;

// // Callback function when data is sent
// void onDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
//     Serial.print("CYD Send Status: ");
//     Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Success" : "Failed");
// }

// // Callback function when data is received
// void onDataRecv(const uint8_t *mac, const uint8_t *incomingDataPtr, int len) {
//     struct_message tempData;
//     memcpy(&tempData, incomingDataPtr, sizeof(tempData));
    
//     // Store sender's MAC address if not already registered
//     if (!senderMacRegistered) {
//         memcpy(senderMacAddress, mac, 6);
//         senderMacRegistered = true;
        
//         // Register the sender as a peer for bidirectional communication
//         esp_now_peer_info_t peerInfo = {};
//         memcpy(peerInfo.peer_addr, mac, 6);
//         peerInfo.channel = 0;
//         peerInfo.encrypt = false;
        
//         if (esp_now_add_peer(&peerInfo) == ESP_OK) {
//             Serial.print("Sender ESP32 registered: ");
//             for (int i = 0; i < 6; i++) {
//                 Serial.printf("%02X", mac[i]);
//                 if (i < 5) Serial.print(":");
//             }
//             Serial.println();
//         }
//     }
    
//     // Send data to queue for processing
//     xQueueSend(espnowReceiveQueue, &tempData, portMAX_DELAY);
    
//     Serial.print("Data received - Total: ");
//     Serial.print(tempData.total);
//     Serial.print(" Battery: ");
//     Serial.print(tempData.battery);
//     Serial.print(" Cup: ");
//     Serial.print(tempData.cup);
//     Serial.print(" Headset: ");
//     Serial.println(tempData.headset);
// }

// // Initialize ESP-NOW
// void initESPNOW() {
//     // Set device as a Wi-Fi Station
//     WiFi.mode(WIFI_STA);
    
//     Serial.print("CYD MAC Address: ");
//     Serial.println(WiFi.macAddress());
//     Serial.println(">>> Use this MAC address in your sender ESP32!");
    
//     // Init ESP-NOW
//     if (esp_now_init() != ESP_OK) {
//         Serial.println("Error initializing ESP-NOW");
//         return;
//     }
    
//     Serial.println("ESP-NOW Initialized Successfully");
    
//     // Register callbacks
//     esp_now_register_recv_cb(onDataRecv);
//     esp_now_register_send_cb(onDataSent);
    
//     // Create queues for ESP-NOW data
//     espnowReceiveQueue = xQueueCreate(10, sizeof(struct_message));
//     espnowSendQueue = xQueueCreate(10, sizeof(struct_message));
    
//     // Create mutex for LVGL thread safety
//     lvglMutex = xSemaphoreCreateMutex();
// }

// // Function to send message to sender ESP32
// bool sendMessageToSender(int total, int battery, int cup, int headset) {
//     if (!senderMacRegistered) {
//         Serial.println("Error: Sender not registered yet. Wait for first message.");
//         return false;
//     }
    
//     struct_message msgToSend;
//     msgToSend.total = total;
//     msgToSend.battery = battery;
//     msgToSend.cup = cup;
//     msgToSend.headset = headset;
    
//     // Add to send queue
//     if (xQueueSend(espnowSendQueue, &msgToSend, 0) == pdTRUE) {
//         Serial.println("Message queued for sending");
//         return true;
//     }
    
//     Serial.println("Error: Send queue full");
//     return false;
// }

// // Task to handle ESP-NOW received data
// void espnowReceiveTask(void *parameter) {
//     struct_message receivedData;
    
//     while (1) {
//         // Wait for data from queue
//         if (xQueueReceive(espnowReceiveQueue, &receivedData, portMAX_DELAY) == pdTRUE) {
//             // Copy to global variable
//             if (xSemaphoreTake(lvglMutex, portMAX_DELAY) == pdTRUE) {
//                 memcpy(&incomingData, &receivedData, sizeof(struct_message));
//                 xSemaphoreGive(lvglMutex);
//             }
            
//             Serial.println("Data processed by ESP-NOW receive task");
//         }
        
//         vTaskDelay(10 / portTICK_PERIOD_MS);
//     }
// }

// // Task to handle ESP-NOW sending data
// void espnowSendTask(void *parameter) {
//     struct_message dataToSend;
    
//     while (1) {
//         // Wait for data from send queue
//         if (xQueueReceive(espnowSendQueue, &dataToSend, portMAX_DELAY) == pdTRUE) {
//             if (senderMacRegistered) {
//                 // Send via ESP-NOW
//                 esp_err_t result = esp_now_send(senderMacAddress, (uint8_t *)&dataToSend, sizeof(dataToSend));
                
//                 if (result == ESP_OK) {
//                     Serial.println(">>> CYD Sent to Sender ESP32:");
//                     Serial.print("  Total: "); Serial.println(dataToSend.total);
//                     Serial.print("  Battery: "); Serial.println(dataToSend.battery);
//                     Serial.print("  Cup: "); Serial.println(dataToSend.cup);
//                     Serial.print("  Headset: "); Serial.println(dataToSend.headset);
//                 } else {
//                     Serial.println("Error sending data from CYD");
//                 }
//             } else {
//                 Serial.println("Cannot send: Sender not registered yet");
//             }
//         }
        
//         vTaskDelay(10 / portTICK_PERIOD_MS);
//     }
// }

// // Task to update LVGL UI with received data
// void lvglUpdateTask(void *parameter) {
//     char buffer[64];
    
//     while (1) {
//         // Take mutex before accessing shared data and UI
//         if (xSemaphoreTake(lvglMutex, portMAX_DELAY) == pdTRUE) {
            
//             // Update cup label
//             if (GUI_Label__screen_1__label_6 != NULL) {
//                 snprintf(buffer, sizeof(buffer), "%d", incomingData.cup);
//                 lv_label_set_text(GUI_Label__screen_1__label_6, buffer);
//                 lv_label_set_text(GUI_Label__screen_2__label_23, buffer);
//             }
            
//             // Update battery label
//             if (GUI_Label__screen_1__label_7 != NULL) {
//                 snprintf(buffer, sizeof(buffer), "%d", incomingData.battery);
//                 lv_label_set_text(GUI_Label__screen_1__label_7, buffer);
//                 lv_label_set_text(GUI_Label__screen_2__label_24, buffer);
//             }
            
//             xSemaphoreGive(lvglMutex);
//         }
        
//         vTaskDelay(100 / portTICK_PERIOD_MS);  // Update UI every 100ms
//     }
// }



#include "espnow_config.h"
#include "GUI.h"

// Global variables
struct_message incomingData;
struct_message outgoingData;
QueueHandle_t espnowReceiveQueue;
QueueHandle_t espnowSendQueue;
SemaphoreHandle_t lvglMutex;
uint8_t senderMacAddress[6];
bool senderMacRegistered = false;

// Callback function when data is sent
void onDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
    Serial.print("CYD Send Status: ");
    Serial.println(status == ESP_NOW_SEND_SUCCESS ? "✓ Success" : "✗ Failed");
    
    if (status != ESP_NOW_SEND_SUCCESS) {
        Serial.println("  Send failed - check MAC address and connection");
    }
}

// Callback function when data is received
void IRAM_ATTR onDataRecv(const uint8_t *mac, const uint8_t *incomingDataPtr, int len) {
    struct_message tempData;
    memcpy(&tempData, incomingDataPtr, sizeof(tempData));
    
    Serial.println("=== Data Received from Sender ===");
    Serial.print("Total: "); Serial.println(tempData.total);
    Serial.print("Battery: "); Serial.println(tempData.battery);
    Serial.print("Cup: "); Serial.println(tempData.cup);
    Serial.print("Headset: "); Serial.println(tempData.headset);
    
    // Store sender's MAC address if not already registered
    if (!senderMacRegistered) {
        memcpy(senderMacAddress, mac, 6);
        senderMacRegistered = true;
        
        // Register the sender as a peer for bidirectional communication
        esp_now_peer_info_t peerInfo = {};
        memcpy(peerInfo.peer_addr, mac, 6);
        peerInfo.channel = 0;
        peerInfo.encrypt = false;
        
        if (esp_now_add_peer(&peerInfo) == ESP_OK) {
            Serial.print("✓ Sender ESP32 registered: ");
            for (int i = 0; i < 6; i++) {
                Serial.printf("%02X", mac[i]);
                if (i < 5) Serial.print(":");
            }
            Serial.println();
        } else {
            Serial.println("✗ Failed to register sender as peer");
        }
    }
    
    // Send data to queue for processing
    BaseType_t xHigherPriorityTaskWoken = pdFALSE;
    xQueueSendFromISR(espnowReceiveQueue, &tempData, &xHigherPriorityTaskWoken);
    
    if (xHigherPriorityTaskWoken) {
        portYIELD_FROM_ISR();
    }
}

// Initialize ESP-NOW
void initESPNOW() {
    // Set device as a Wi-Fi Station
    WiFi.mode(WIFI_STA);
    
    Serial.println("\n╔════════════════════════════════════════╗");
    Serial.println("║   CYD ESP-NOW Initialization           ║");
    Serial.println("╠════════════════════════════════════════╣");
    Serial.print("║   MAC: ");
    Serial.print(WiFi.macAddress());
    Serial.println("      ║");
    Serial.println("╚════════════════════════════════════════╝");
    Serial.println(">>> Use this MAC address in your sender ESP32!");
    
    // Init ESP-NOW
    if (esp_now_init() != ESP_OK) {
        Serial.println("✗ Error initializing ESP-NOW");
        return;
    }
    
    Serial.println("✓ ESP-NOW Initialized Successfully");
    
    // Register callbacks
    esp_now_register_recv_cb(onDataRecv);
    esp_now_register_send_cb(onDataSent);
    
    // MANUALLY REGISTER SENDER MAC - 
    uint8_t senderMAC[] = {0xEC, 0xE3, 0x34, 0x19, 0xAC, 0xFC};  // ← YOUR SENDER MAC HERE

    memcpy(senderMacAddress, senderMAC, 6);
    
    esp_now_peer_info_t peerInfo = {};
    memcpy(peerInfo.peer_addr, senderMAC, 6);
    peerInfo.channel = 0;
    peerInfo.encrypt = false;
    
    if (esp_now_add_peer(&peerInfo) == ESP_OK) {
        senderMacRegistered = true;
        Serial.print("✓ Sender pre-registered: ");
        for (int i = 0; i < 6; i++) {
            Serial.printf("%02X", senderMAC[i]);
            if (i < 5) Serial.print(":");
        }
        Serial.println();
        Serial.println("✓ CYD can now send commands!");
    } else {
        Serial.println("✗ Failed to pre-register sender");
    }
    
    // Create queues for ESP-NOW data
    espnowReceiveQueue = xQueueCreate(20, sizeof(struct_message));
    espnowSendQueue = xQueueCreate(20, sizeof(struct_message));
    
    if (espnowReceiveQueue == NULL || espnowSendQueue == NULL) {
        Serial.println("✗ Failed to create queues!");
        return;
    }
    
    Serial.println("✓ Queues created");
    
    // Create mutex for LVGL thread safety
    lvglMutex = xSemaphoreCreateMutex();
    
    if (lvglMutex == NULL) {
        Serial.println("✗ Failed to create mutex!");
        return;
    }
    
    Serial.println("✓ Mutex created");
    Serial.println("✓ CYD ready to communicate");
}

// Function to send COMMAND ONLY to sender ESP32
bool sendCommandToSender(int commandCode) {
    Serial.print("\n>>> Attempting to send command: ");
    Serial.println(commandCode);
    
    if (!senderMacRegistered) {
        Serial.println("  Sender not registered yet!");
        Serial.println("  Waiting for first message from sender...");
        Serial.println("  Make sure sender ESP32 is powered on!");
        return false;
    }
    
    struct_message msgToSend;
    msgToSend.total = commandCode;
    msgToSend.battery = 0;
    msgToSend.cup = 0;
    msgToSend.headset = 0;
    
    Serial.print("Sending to MAC: ");
    for (int i = 0; i < 6; i++) {
        Serial.printf("%02X", senderMacAddress[i]);
        if (i < 5) Serial.print(":");
    }
    Serial.println();
    
    // Send directly instead of using queue for immediate feedback
    esp_err_t result = esp_now_send(senderMacAddress, (uint8_t *)&msgToSend, sizeof(msgToSend));
    
    if (result == ESP_OK) {
        Serial.println("✓ Command sent successfully");
        return true;
    } else {
        Serial.print("✗ Send failed with error: ");
        Serial.println(result);
        return false;
    }
}

// Legacy function for compatibility
bool sendMessageToSender(int total, int battery, int cup, int headset) {
    return sendCommandToSender(total);
}

// Task to handle ESP-NOW received data
void espnowReceiveTask(void *parameter) {
    struct_message receivedData;
    
    Serial.println("CYD Receive task started");
    
    while (1) {
        // Wait for data from queue
        if (xQueueReceive(espnowReceiveQueue, &receivedData, portMAX_DELAY) == pdTRUE) {
            // Copy to global variable
            if (xSemaphoreTake(lvglMutex, portMAX_DELAY) == pdTRUE) {
                memcpy(&incomingData, &receivedData, sizeof(struct_message));
                xSemaphoreGive(lvglMutex);
            }
            
            Serial.println("✓ Data processed by receive task");
        }
        
        vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}

// Task to handle ESP-NOW sending data (NOT USED - sending directly now)
void espnowSendTask(void *parameter) {
    struct_message dataToSend;
    
    Serial.println("CYD Send task started");
    
    while (1) {
        // This task is kept for compatibility but not actively used
        // Commands are sent directly in sendCommandToSender()
        vTaskDelay(100 / portTICK_PERIOD_MS);
    }
}

// Task to update LVGL UI with received data
void lvglUpdateTask(void *parameter) {
    char buffer[64];
    
    Serial.println("LVGL Update task started");
    
    while (1) {
        // Take mutex before accessing shared data and UI
        if (xSemaphoreTake(lvglMutex, portMAX_DELAY) == pdTRUE) {
             


            
            // Update cup label
            if (  GUI_Label__screen_1__label_41 != NULL) {
                snprintf(buffer, sizeof(buffer), "%d", incomingData.cup);
                lv_label_set_text( GUI_Label__screen_1__label_41, buffer);
                if ( GUI_Label__screen_2__label_1 != NULL) {
                    lv_label_set_text( GUI_Label__screen_2__label_1, buffer);
                }
            }
            
            // Update battery label
            if (GUI_Label__screen_1__label_43 != NULL) {
                snprintf(buffer, sizeof(buffer), "%d", incomingData.battery);
                lv_label_set_text(GUI_Label__screen_1__label_43, buffer);
                if (GUI_Label__screen_2__label_2 != NULL) {
                    lv_label_set_text( GUI_Label__screen_2__label_2, buffer);
                }
            }
            
            xSemaphoreGive(lvglMutex);
        }
        
        vTaskDelay(100 / portTICK_PERIOD_MS);
    }
}