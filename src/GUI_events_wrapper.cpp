
#include "GUI_events_wrapper.h"
#include "espnow_config.h"
#include "qrcode_generator.h"
#include <Arduino.h>
#include "GUI.h"
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

extern "C" {

bool sendStartCommand(void) {
    // Command 999: Start new session, reset all counters
    bool success = sendMessageToSender(999, 0, 0, 0);
    
    // if (success) {
    //     Serial.println("╔════════════════════════════════════╗");
    //     Serial.println("║   START - New Session Begun        ║");
    //     Serial.println("╚════════════════════════════════════╝");
    // } else {
    //     Serial.println("  START failed - Sender offline");
    // }
    
    return success;
}

bool sendContinueCommand(void) {
    // Command 666: Save current batch, ready for next batch
    bool success = sendMessageToSender(666, 0, 0, 0);
    
    // if (success) {
    //     Serial.println("╔════════════════════════════════════╗");
    //     Serial.println("║   CONTINUE - Batch Saved           ║");
    //     Serial.println("║   Ready for Next Batch             ║");
    //     Serial.println("╚════════════════════════════════════╝");
    // } else {
    //     Serial.println("  CONTINUE failed");
    // }
    
    return success;
}

bool sendDoneCommand(void) {
    // Command 777: End session, get final totals
    bool success = sendMessageToSender(777, 0, 0, 0);
    
    // if (success) {
    //     Serial.println("╔════════════════════════════════════╗");
    //     Serial.println("║   DONE - Requesting Final Totals   ║");
    //     Serial.println("╚════════════════════════════════════╝");
    // } else {
    //     Serial.println("  DONE failed");
    // }
    
    return success;
}

bool sendStopCommand(void) {
    // Command 888: Stop session
    bool success = sendMessageToSender(888, 0, 0, 0);
    
    if (success) {
        Serial.println("╔════════════════════════════════════╗");
        Serial.println("║   STOP - Session Terminated        ║");
        Serial.println("╚════════════════════════════════════╝");
    } else {
        Serial.println("  STOP failed");
    }
    
    return success;
}

// C-compatible delay wrapper
void delayMs(int milliseconds) {
    vTaskDelay(milliseconds / portTICK_PERIOD_MS);
}


// C-compatible wrapper to get session data
void getSessionData(int* battery, int* cup, int* headset, int* total) {
    // Access global incomingData with mutex protection
    if (xSemaphoreTake(lvglMutex, 100 / portTICK_PERIOD_MS) == pdTRUE) {
        *battery = incomingData.battery;
        *cup = incomingData.cup;
        *headset = incomingData.headset;
        *total = incomingData.total;
        xSemaphoreGive(lvglMutex);
    } else {
        // Fallback if mutex not available
        *battery = 0;
        *cup = 0;
        *headset = 0;
        *total = 0;
    }
}
// C-compatible wrapper to generate QR code
bool generateSessionQR(void) {
    int battery, cup, headset, total;
    
    // Get current session data
    getSessionData(&battery, &cup, &headset, &total);
    
    // Generate QR code on screen_2
    lv_obj_t* qr = generateQRCode(GUI_Screen__screen_2, battery, cup, headset, total);
    
    return (qr != NULL);
}

} 