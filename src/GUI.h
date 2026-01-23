#ifndef _GUI_HEADER_INCLUDED
#define _GUI_HEADER_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif


#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif
#include "ui_helpers.h"

extern lv_obj_t * GUI_Screen__screen;
extern lv_obj_t * GUI_Image__screen__Vector;
extern lv_obj_t * GUI_Image__screen__Vector__image_OEpXKomvx3fNNR;
LV_FONT_DECLARE(inter64_1);
extern lv_obj_t * GUI_Label__screen__EcoBarter;
extern lv_obj_t * GUI_Image__screen__image;
extern lv_obj_t * GUI_Image__screen__image_1;
LV_FONT_DECLARE(inter_26_700_1);
extern lv_obj_t * GUI_Label__screen__Niara;
extern lv_obj_t * GUI_Image__screen__Vector__image_7w7SSHR9F4I0RZ;
extern lv_obj_t * GUI_Image__screen__Vector__image_N42RY2wWj1ffOR;
extern lv_obj_t * GUI_Image__screen__Vector__image_U0R0CdtSbx5EuB;
extern lv_obj_t * GUI_Image__screen__Vector__image_vc7Mw8cBAbXYEN;
LV_FONT_DECLARE(inter_48_1);
extern lv_obj_t * GUI_Label__screen__label_1;
extern lv_obj_t * GUI_Label__screen__label_2;
LV_FONT_DECLARE(inter_11_700_1);
extern lv_obj_t * GUI_Label__screen__label_18;
extern lv_obj_t * GUI_Button__screen__button;
LV_FONT_DECLARE(inter_36_700_1);
extern lv_obj_t * GUI_Label__screen__label_43;

extern lv_obj_t * GUI_Screen__screen_1;
extern lv_obj_t * GUI_Image__screen_1__image_3;
extern lv_obj_t * GUI_Image__screen_1__image_5;
extern lv_obj_t * GUI_Image__screen_1__image_6;
extern lv_obj_t * GUI_Image__screen_1__image_9;
extern lv_obj_t * GUI_Image__screen_1__image_10;
extern lv_obj_t * GUI_Image__screen_1__image_11;
extern lv_obj_t * GUI_Image__screen_1__Vector;
extern lv_obj_t * GUI_Image__screen_1__image_12;
extern lv_obj_t * GUI_Image__screen_1__image_13;
extern lv_obj_t * GUI_Image__screen_1__image_14;
extern lv_obj_t * GUI_Label__screen_1__label_4;
extern lv_obj_t * GUI_Image__screen_1__image_15;
extern lv_obj_t * GUI_Image__screen_1__image_16;
extern lv_obj_t * GUI_Image__screen_1__image_17;
extern lv_obj_t * GUI_Image__screen_1__image_18;
extern lv_obj_t * GUI_Image__screen_1__image_19;
extern lv_obj_t * GUI_Image__screen_1__image_20;
extern lv_obj_t * GUI_Label__screen_1__label_5;
extern lv_obj_t * GUI_Image__screen_1__image_21;
extern lv_obj_t * GUI_Label__screen_1__label_6;
extern lv_obj_t * GUI_Label__screen_1__label_7;
extern lv_obj_t * GUI_Label__screen_1__label_8;
extern lv_obj_t * GUI_Label__screen_1__label_9;
extern lv_obj_t * GUI_Button__screen_1__button_1;
extern lv_obj_t * GUI_Label__screen_1__label;
extern lv_obj_t * GUI_Button__screen_1__button_2;
extern lv_obj_t * GUI_Label__screen_1__label_3;

extern lv_obj_t * GUI_Screen__screen_2;
extern lv_obj_t * GUI_Image__screen_2__image_22;
extern lv_obj_t * GUI_Image__screen_2__image_23;
extern lv_obj_t * GUI_Panel__screen_2__panel;
extern lv_obj_t * GUI_Panel__screen_2__panel_1;
extern lv_obj_t * GUI_Label__screen_2__label_12;
extern lv_obj_t * GUI_Label__screen_2__label_13;
extern lv_obj_t * GUI_Label__screen_2__label_14;
extern lv_obj_t * GUI_Label__screen_2__label_15;
extern lv_obj_t * GUI_Label__screen_2__label_16;
extern lv_obj_t * GUI_Label__screen_2__label_17;
extern lv_obj_t * GUI_Image__screen_2__image_26;
extern lv_obj_t * GUI_Image__screen_2__image_25;
extern lv_obj_t * GUI_Label__screen_2__label_19;
extern lv_obj_t * GUI_Label__screen_2__label_20;
extern lv_obj_t * GUI_Label__screen_2__label_21;
LV_FONT_DECLARE(inter_9_700_1);
extern lv_obj_t * GUI_Label__screen_2__label_22;
extern lv_obj_t * GUI_Label__screen_2__label_23;
extern lv_obj_t * GUI_Label__screen_2__label_24;
extern lv_obj_t * GUI_Label__screen_2__label_25;
extern lv_obj_t * GUI_Label__screen_2__label_26;
extern lv_obj_t * GUI_Label__screen_2__label_27;
extern lv_obj_t * GUI_Label__screen_2__label_28;
extern lv_obj_t * GUI_Label__screen_2__label_29;
extern lv_obj_t * GUI_Label__screen_2__label_30;
extern lv_obj_t * GUI_Label__screen_2__label_31;
extern lv_obj_t * GUI_Label__screen_2__label_32;
extern lv_obj_t * GUI_Label__screen_2__label_33;
extern lv_obj_t * GUI_Label__screen_2__label_34;
extern lv_obj_t * GUI_Label__screen_2__label_35;
extern lv_obj_t * GUI_Panel__screen_2__panel_2;
extern lv_obj_t * GUI_Label__screen_2__label_36;
extern lv_obj_t * GUI_Label__screen_2__label_37;
extern lv_obj_t * GUI_Label__screen_2__label_38;
extern lv_obj_t * GUI_Label__screen_2__label_39;
extern lv_obj_t * GUI_Panel__screen_2__panel_3;
extern lv_obj_t * GUI_Label__screen_2__label_10;
extern lv_obj_t * GUI_Label__screen_2__label_40;
extern lv_obj_t * GUI_Label__screen_2__label_41;
extern lv_obj_t * GUI_Label__screen_2__label_42;


// Screen-specific function declarations
void GUI_initScreen__screen();
void GUI_initScreenTexts__screen();
void GUI_initScreenStyles__screen();

void GUI_initScreen__screen_1();
void GUI_initScreenTexts__screen_1();
void GUI_initScreenStyles__screen_1();

void GUI_initScreen__screen_2();
void GUI_initScreenTexts__screen_2();
void GUI_initScreenStyles__screen_2();

extern lv_style_t GUI_Style__class_rcPsn8044NoMFo__;
extern lv_style_t GUI_Style__class_EXUmGNppUP3BAQ__;
extern lv_style_t GUI_Style__class_shG784n8VR85Bb__;
extern lv_style_t GUI_Style__class_cLln4Xf1crR93J__;
extern lv_style_t GUI_Style__class_ZSqRtXRcQ6r3Cu__;
extern lv_style_t GUI_Style__class_OLOGMcceJZC1td__;
extern lv_style_t GUI_Style__class_NFze9IzZDK1TgB__;
extern lv_style_t GUI_Style__class_VMBuGvCKD78y4b__;
extern lv_style_t GUI_Style__class_Qw3ndIBhuQ1A0q__;
extern lv_style_t GUI_Style__class_OLNEJJ2Wf2vqI9__;
extern lv_style_t GUI_Style__class_p7h5X7PAzOZdRP__;
extern lv_style_t GUI_Style__class_myVaHjF4Ecf1Jr__;
extern lv_style_t GUI_Style__class_piEN5JGAcXDaVy__;
extern lv_style_t GUI_Style__class_B54ZoJjVQ9sne5__;
extern lv_style_t GUI_Style__class_Bg4YvsQw8dmJUH__;
extern lv_style_t GUI_Style__class_3HyzklTt8nb1er__;
extern lv_style_t GUI_Style__class_xCua8hAkTrHUOV__;
extern lv_style_t GUI_Style__class_mhPDSvBNA6VuzO__;
extern lv_style_t GUI_Style__class_MFpfIYNsSfjfst__;
extern lv_style_t GUI_Style__class_w8aa4Wgu56NrT7__;
extern lv_style_t GUI_Style__class_bYrhIpa3hAPt93__;
extern lv_style_t GUI_Style__class_wIKUNlKUt1gtjQ__;
extern lv_style_t GUI_Style__class_CFVbTuAuXyTYRx__;
extern lv_style_t GUI_Style__class_aAzgrLf0yJQMoM__;
extern lv_style_t GUI_Style__class_C4oXuKkvBfbYTF__;
extern lv_style_t GUI_Style__class_cBDGzGQtVdkAoZ__;
extern lv_style_t GUI_Style__class_BMysOVZkx6CUfW__;
extern lv_style_t GUI_Style__class_kMk2gVzGoaK67Q__;
extern lv_style_t GUI_Style__class_uuZVZjjdStMBuo__;
extern lv_style_t GUI_Style__class_I8rZM97f8JewMC__;
extern lv_style_t GUI_Style__class_4uDnY5PDbQXDBx__;
extern lv_style_t GUI_Style__class_w6pG0SdAzIU58B__;
extern lv_style_t GUI_Style__class_bQBl578tfWLPHd__;
extern lv_style_t GUI_Style__class_cphzecocykUnhG__;
extern lv_style_t GUI_Style__class_hJcZRKmuzocpAr__;
extern lv_style_t GUI_Style__class_IZ8gmLq6qtSQAV__;
extern lv_style_t GUI_Style__class_2SZkPd6E8g4kkg__;
extern lv_style_t GUI_Style__class_xW7W8qhVWWAtf0__;
extern lv_style_t GUI_Style__class_eFvrWhjiiVOUdP__;
extern lv_style_t GUI_Style__class_6rLUh02ae3r8gD__;
extern lv_style_t GUI_Style__class_2jQRUzDJArXrzI__;
extern lv_style_t GUI_Style__class_f79iwk6LcmcMaX__;
extern lv_style_t GUI_Style__class_Z7SFLrb0RLstLW__;
extern lv_style_t GUI_Style__class_rF82vjwrhcW0oH__;
extern lv_style_t GUI_Style__class_B46HWQWH7QIJbr__;
extern lv_style_t GUI_Style__class_nVw4qdGY6HBqKi__;
extern lv_style_t GUI_Style__class_mh9wzA6HJVCk9J__;
extern lv_style_t GUI_Style__class_kI9wn6boIxbVK1__;
extern lv_style_t GUI_Style__class_zxsttoDlU8R73i__;


void GUI_load();

void GUI_init();

void GUI_refresh();


void GUI_initHAL();
void HAL_init();

void GUI_initFramework();

void GUI_loadContent();


void GUI_initContent();


void GUI_initTheme();


void GUI_initScreens();


void GUI_loadFirstScreen();


void GUI_initScreenContents();

void GUI_initScreenTexts();

void GUI_initScreenStyles();


void GUI_initGlobalStyles();


void GUI_initAnimations();




void GUI_event__Label__screen__label_18__Clicked(lv_event_t * event);
void GUI_event__Button__screen__button__Clicked(lv_event_t * event);
void GUI_event__Button__screen_1__button_1__Released(lv_event_t * event);



#ifdef __cplusplus
} //extern "C"
#endif

#endif //_GUI_HEADER_INCLUDED

LV_IMG_DECLARE( upload_vector_120x120_42befb7f73aa4429aa80d754d7a5b864_png );
LV_IMG_DECLARE( upload_vector_25x30_17e13a5f03d94996aeba296d9b94634a_png );
LV_IMG_DECLARE( upload_vector_110x110_20b0dcae8a69495aa6b0b3ebf8d88194_png );
LV_IMG_DECLARE( upload_vector_80x80_7e603fce42ac472dae47fb7775f1ab4e_png );
LV_IMG_DECLARE( upload_vector_280x280_4922c0b2d11645ecb6964b5000ff7e59_png );
LV_IMG_DECLARE( upload_vector_800x480_efe122e387d3452b82c309071d35b967_png );
LV_IMG_DECLARE( upload_vector_56x90_5c52ae5171e846908af8ce8513b83bf4_png );
LV_IMG_DECLARE( upload_vector_30x15_adaac31bac844762adf5da297da2223a_png );
LV_IMG_DECLARE( upload_vector_24x25_90319e29db3c4a63970161315d1a1ecb_png );
LV_IMG_DECLARE( upload_vector_44x30_7b32e144298344d4a7e274cb468fbedd_png );
LV_IMG_DECLARE( upload_vector_100x50_287c335e4fd947c8b62a60dbfe9a07a1_png );
LV_IMG_DECLARE( upload_vector_60x20_eea473bc133e47ed9f502d07275c056a_png );
LV_IMG_DECLARE( upload_vector_250x60_6d44a08093064a28909ca60ec19b42df_png );
LV_IMG_DECLARE( upload_vector_56x20_71b2ced0f46c4eb9b37578de89e4756d_png );
LV_IMG_DECLARE( upload_vector_60x80_5c0471f6a5f94344818414c1aad5a69d_png );
LV_IMG_DECLARE( upload_vector_50x30_a63f5fdb173a49b99b771acabba63927_png );
