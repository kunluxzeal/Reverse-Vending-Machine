#ifndef QRCODE_GENERATOR_H
#define QRCODE_GENERATOR_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

// C-compatible function to generate QR code
lv_obj_t* generateQRCode(lv_obj_t* parent, int battery, int cup, int headset, int total);

// C-compatible function to clear QR code
void clearQRCode(lv_obj_t* qr);

#ifdef __cplusplus
}
#endif

#endif // QRCODE_GENERATOR_H