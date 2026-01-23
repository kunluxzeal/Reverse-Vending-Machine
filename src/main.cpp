#include "display.h"
#include "GUI.h"
#include "espnow_config.h"


// Task handles
TaskHandle_t lvglTaskHandle = NULL;
TaskHandle_t espnowTaskHandle = NULL;
TaskHandle_t lvglUpdateTaskHandle = NULL;

// LVGL task - handles display refresh
void lvglTask(void *parameter) {
    while (1) {
        if (xSemaphoreTake(lvglMutex, portMAX_DELAY) == pdTRUE) {
            lv_timer_handler();
            xSemaphoreGive(lvglMutex);
        }
        vTaskDelay(5 / portTICK_PERIOD_MS);
    }
}

void setup() {
    Serial.begin(115200);
    Serial.println("Starting ESP32-S3 CYD with ESP-NOW...");
    
    // Initialize display and LVGL
    setup_display();
    
    // Initialize SquareLine UI
    GUI_init();
    
    // Initialize ESP-NOW
    initESPNOW();
    
    // Create RTOS tasks
    // Task 1: LVGL refresh task (highest priority)
    xTaskCreatePinnedToCore(
        lvglTask,           // Task function
        "LVGL Task",        // Task name
        4096,               // Stack size
        NULL,               // Parameters
        2,                  // Priority (higher)
        &lvglTaskHandle,    // Task handle
        1                   // Core 1
    );
    
    // Task 2: ESP-NOW data handling task
    xTaskCreatePinnedToCore(
        espnowTask,         // Task function
        "ESP-NOW Task",     // Task name
        4096,               // Stack size
        NULL,               // Parameters
        1,                  // Priority (medium)
        &espnowTaskHandle,  // Task handle
        0                   // Core 0
    );
    
    // Task 3: LVGL UI update task
    xTaskCreatePinnedToCore(
        lvglUpdateTask,         // Task function
        "LVGL Update Task",     // Task name
        4096,                   // Stack size
        NULL,                   // Parameters
        1,                      // Priority (medium)
        &lvglUpdateTaskHandle,  // Task handle
        1                       // Core 1 (same as LVGL)
    );
    
    Serial.println("All tasks created successfully!");
}

void loop() {
    // Empty - all work done by RTOS tasks
    vTaskDelay(1000 / portTICK_PERIOD_MS);
}