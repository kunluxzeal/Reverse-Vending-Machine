#include "qrcode_generator.h"
#include <Arduino.h>   // For String, Serial, millis()
#include <cstring>     // For strlen()
#include <cstdio>      // For snprintf()
#include "GUI.h"

// Your website base URL - customize this!
#define BASE_URL "https://ecobarter.africa/ecobarterpay/"

// Global QR object reference for cleanup
static lv_obj_t* current_qr = NULL;
static lv_obj_t* current_label = NULL;

// Create URL with session data embedded as query parameters
String createDataURL(int battery, int cup, int headset, int total) {
    String url = BASE_URL;
    url += "battery=" + String(battery);
    url += "&cup=" + String(cup);
    url += "&headset=" + String(headset);
    url += "&total=" + String(total);
    url += "&session=" + String(millis());  // Unique session ID
    
    return url;
}

// Clear existing QR code
void clearQRCode(lv_obj_t* qr) {
    if (qr != NULL) {
        lv_obj_del(qr);
    }
}

// Generate and display QR code using LVGL's built-in QR code widget
lv_obj_t* generateQRCode(lv_obj_t* parent, int battery, int cup, int headset, int total) {
    
    // Clear previous QR code if exists
    if (current_qr != NULL) {
        lv_obj_del(current_qr);
        current_qr = NULL;
    }
    if (current_label != NULL) {
        lv_obj_del(current_label);
        current_label = NULL;
    }
    
    // Create URL with data
    String dataURL = createDataURL(battery, cup, headset, total);
    
    Serial.println("╔════════════════════════════════════════╗");
    Serial.println("║   Generating QR Code                   ║");
    Serial.println("╠════════════════════════════════════════╣");
    Serial.print("║   URL: ");
    Serial.println(dataURL);
    Serial.print("║   Length: ");
    Serial.print(dataURL.length());
    Serial.println(" chars");
    Serial.println("╚════════════════════════════════════════╝");
    
    // Create LVGL QR code object
    lv_obj_t* qr = lv_qrcode_create(parent);
    
    // Set QR code size (in pixels)
    lv_qrcode_set_size(qr, 180);  // 200x200 pixels
    
    // Set dark and light colors
    lv_qrcode_set_dark_color(qr, lv_color_black());
    lv_qrcode_set_light_color(qr, lv_color_white());
    
    // Update QR code with data
    const char* url_cstr = dataURL.c_str();
    lv_qrcode_update(qr, url_cstr, strlen(url_cstr));
    
    // Center the QR code
    lv_obj_align(qr, LV_ALIGN_CENTER, 165, -20);

    // String txt = String(millis());

    // lv_label_set_text(GUI_Label__screen_2__label_49, txt.c_str());

    lv_label_set_text_fmt(
    GUI_Label__screen_2__label_49,
    "Transaction ID: 2026-001-%lu",
    millis()
    );

    lv_label_set_text_fmt(
    GUI_Label__screen_2__label_48,
    "EB: 2026-001-%lu",
    millis()
);


    // // Add label below QR code with data summary
    // lv_obj_t* label = lv_label_create(parent);
    // char buf[128];
    // snprintf(buf, sizeof(buf), 
    //          "Scan to redeem\n"
    //          "Total: %d items\n"
    //          "Batteries: %d | Cups: %d | Headsets: %d",
    //          total, battery, cup, headset);
    // lv_label_set_text(label, buf);
    // lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_CENTER, 0);
    // lv_obj_set_style_text_color(label, lv_color_hex(0x000000), 0);
    // lv_obj_align(label, LV_ALIGN_CENTER, 100, 140);
    
    // Store references for cleanup
    current_qr = qr;
    // current_label = label;
    
    Serial.println("✓ QR Code generated successfully!");
    
    return qr;
}