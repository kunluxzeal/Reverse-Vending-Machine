#ifndef GUI_EVENTS_WRAPPER_H
#define GUI_EVENTS_WRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

// RVM Session Commands
bool sendStartCommand(void);      // Start new session (999)
bool sendContinueCommand(void);   // Save batch, start next batch (666)
bool sendDoneCommand(void);       // End session, get totals (777)
bool sendStopCommand(void);       // Stop session (888)

// QR Code generation wrapper
bool generateSessionQR(void);     // Generate QR with current session data

// Get session data (C-compatible wrapper)
void getSessionData(int* battery, int* cup, int* headset, int* total);

// Delay wrapper for C code (wraps vTaskDelay)
void delayMs(int milliseconds);

#ifdef __cplusplus
}
#endif

#endif // GUI_EVENTS_WRAPPER_H