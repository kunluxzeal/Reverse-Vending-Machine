#include "display.h"
#include "GUI.h"
#include "espnow_config.h"

// Task handles
TaskHandle_t lvglTaskHandle = NULL;
TaskHandle_t espnowReceiveTaskHandle = NULL;
TaskHandle_t espnowSendTaskHandle = NULL;
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
    Serial.println("Starting ESP32-S3 CYD with Bidirectional ESP-NOW...");
    
    // Initialize display and LVGL
    setup_display();
    
    // Initialize SquareLine UI
    GUI_init();
    
    // Initialize ESP-NOW (now with bidirectional support)
    initESPNOW();
    
    // Create RTOS tasks
    // Task 1: LVGL refresh task (highest priority)
    xTaskCreatePinnedToCore(
        lvglTask,
        "LVGL Task",
        4096,
        NULL,
        2,
        &lvglTaskHandle,
        1
    );
    
    // Task 2: ESP-NOW receive task
    xTaskCreatePinnedToCore(
        espnowReceiveTask,
        "ESP-NOW RX Task",
        4096,
        NULL,
        1,
        &espnowReceiveTaskHandle,
        0
    );
    
    // Task 3: ESP-NOW send task
    xTaskCreatePinnedToCore(
        espnowSendTask,
        "ESP-NOW TX Task",
        4096,
        NULL,
        1,
        &espnowSendTaskHandle,
        0
    );
    
    // Task 4: LVGL UI update task
    xTaskCreatePinnedToCore(
        lvglUpdateTask,
        "LVGL Update Task",
        4096,
        NULL,
        1,
        &lvglUpdateTaskHandle,
        1
    );
    
    Serial.println("All tasks created successfully!");
}

void loop() {
    // Empty - all work done by RTOS tasks
    vTaskDelay(1000 / portTICK_PERIOD_MS);
}