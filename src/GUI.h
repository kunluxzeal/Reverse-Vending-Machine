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

extern lv_obj_t * GUI_Screen__screen_1;
extern lv_obj_t * GUI_Image__screen_1__Frame_10_2;
LV_FONT_DECLARE(inter_30_700_1);
extern lv_obj_t * GUI_Label__screen_1__label_38;
LV_FONT_DECLARE(inter_16_1);
extern lv_obj_t * GUI_Label__screen_1__label_39;
extern lv_obj_t * GUI_Panel__screen_1__Rectangle_3;
extern lv_obj_t * GUI_Image__screen_1__image_3;
LV_FONT_DECLARE(inter_22_1);
extern lv_obj_t * GUI_Label__screen_1__label_40;
extern lv_obj_t * GUI_Panel__screen_1__panel_2;
extern lv_obj_t * GUI_Label__screen_1__label_41;
extern lv_obj_t * GUI_Panel__screen_1__Rectangle_4;
extern lv_obj_t * GUI_Image__screen_1__image_4;
extern lv_obj_t * GUI_Label__screen_1__label_42;
extern lv_obj_t * GUI_Panel__screen_1__panel_3;
extern lv_obj_t * GUI_Label__screen_1__label_43;
extern lv_obj_t * GUI_Button__screen_1__button_3;
extern lv_obj_t * GUI_Label__screen_1__label_44;
extern lv_obj_t * GUI_Button__screen_1__button_2;
extern lv_obj_t * GUI_Label__screen_1__label_45;

extern lv_obj_t * GUI_Screen__screen_2;
extern lv_obj_t * GUI_Image__screen_2__Frame_10_3;
extern lv_obj_t * GUI_Label__screen_2__label_46;
extern lv_obj_t * GUI_Panel__screen_2__Rectangle_5;
extern lv_obj_t * GUI_Label__screen_2__label_47;
extern lv_obj_t * GUI_Label__screen_2__label_48;
extern lv_obj_t * GUI_Label__screen_2__label_49;
extern lv_obj_t * GUI_Panel__screen_2__Rectangle_6;
extern lv_obj_t * GUI_Label__screen_2__label_50;
extern lv_obj_t * GUI_Label__screen_2__label_51;
extern lv_obj_t * GUI_Label__screen_2__label_52;
extern lv_obj_t * GUI_Image__screen_2__image_5;
extern lv_obj_t * GUI_Label__screen_2__label_53;
extern lv_obj_t * GUI_Label__screen_2__label_54;
extern lv_obj_t * GUI_Label__screen_2__label_55;
extern lv_obj_t * GUI_Panel__screen_2__Rectangle_7;
extern lv_obj_t * GUI_Label__screen_2__label_1;
extern lv_obj_t * GUI_Label__screen_2__label_2;
LV_FONT_DECLARE(inter_36_700_1);
extern lv_obj_t * GUI_Label__screen_2___114_1;
extern lv_obj_t * GUI_Label__screen_2__label_3;
extern lv_obj_t * GUI_Label__screen_2__label_56;
extern lv_obj_t * GUI_Label__screen_2__label_57;
extern lv_obj_t * GUI_Label__screen_2__label_58;
extern lv_obj_t * GUI_Label__screen_2__label_59;
extern lv_obj_t * GUI_Label__screen_2__label_60;
extern lv_obj_t * GUI_Label__screen_2__label_61;
extern lv_obj_t * GUI_Label__screen_2__label_4;
extern lv_obj_t * GUI_Label__screen_2__label_5;
extern lv_obj_t * GUI_Label__screen_2__label_6;

extern lv_obj_t * GUI_Screen__screen;
extern lv_obj_t * GUI_Image__screen__Frame_10_1;
LV_FONT_DECLARE(inter_60_700_1);
extern lv_obj_t * GUI_Label__screen__EcoBarter_2;
extern lv_obj_t * GUI_Image__screen__Vector_1;
extern lv_obj_t * GUI_Panel__screen__Ellipse_1;
extern lv_obj_t * GUI_Image__screen__Vector_4;
LV_FONT_DECLARE(inter_48_1);
extern lv_obj_t * GUI_Label__screen__label_7;
extern lv_obj_t * GUI_Label__screen__label_8;
extern lv_obj_t * GUI_Button__screen__button_1;
extern lv_obj_t * GUI_Label__screen__label_9;
extern lv_obj_t * GUI_Label__screen__label_10;


// Screen-specific function declarations
void GUI_initScreen__screen_1();
void GUI_initScreenTexts__screen_1();
void GUI_initScreenStyles__screen_1();

void GUI_initScreen__screen_2();
void GUI_initScreenTexts__screen_2();
void GUI_initScreenStyles__screen_2();

void GUI_initScreen__screen();
void GUI_initScreenTexts__screen();
void GUI_initScreenStyles__screen();

extern lv_style_t GUI_Style__class_7RENjibWdasR4O__;
extern lv_style_t GUI_Style__class_y69jT0b1QSBPpf__;
extern lv_style_t GUI_Style__class_ZK7FjaNhsfHeQS__;
extern lv_style_t GUI_Style__class_boV2ZyGlHzy3zb__;
extern lv_style_t GUI_Style__class_x9hJ8FVRSbmktn__;
extern lv_style_t GUI_Style__class_Y2Oy4NEwz6BG3B__;
extern lv_style_t GUI_Style__class_PwXoQqgKmGiZTH__;
extern lv_style_t GUI_Style__class_osNj3MNYgQnfJq__;
extern lv_style_t GUI_Style__class_cpmDDpe00NUNAi__;
extern lv_style_t GUI_Style__class_v6UlzNmnCRoeVI__;
extern lv_style_t GUI_Style__class_kFZj5PDetKtfBP__;
extern lv_style_t GUI_Style__class_uLQ0yf80LYxVDo__;
extern lv_style_t GUI_Style__class_RhrXZpFdUZFGEg__;
extern lv_style_t GUI_Style__class_oMLJ4j9MKloKZa__;
extern lv_style_t GUI_Style__class_q7sqH97pra4J3v__;
extern lv_style_t GUI_Style__class_JleJOa11p2Tms1__;
extern lv_style_t GUI_Style__class_6zGU6IFihRZGBk__;
extern lv_style_t GUI_Style__class_9LZS4gK3UEjKnZ__;
extern lv_style_t GUI_Style__class_PXUEzya4ioBKIS__;
extern lv_style_t GUI_Style__class_oDzwkkUxCjNeXt__;
extern lv_style_t GUI_Style__class_6koEsaD90WKMso__;
extern lv_style_t GUI_Style__class_Nk1oc9gSvZG2vJ__;
extern lv_style_t GUI_Style__class_Z97Y0XvDAtxUaR__;
extern lv_style_t GUI_Style__class_Y33ZOMV5J9ehRi__;
extern lv_style_t GUI_Style__class_JYlKbgrw02M15H__;
extern lv_style_t GUI_Style__class_W9paFAEM9vWTjp__;
extern lv_style_t GUI_Style__class_UsF2f7YfE4e29z__;
extern lv_style_t GUI_Style__class_iZBcdDzacyRpS1__;
extern lv_style_t GUI_Style__class_rNvDpqPoaHLDTz__;
extern lv_style_t GUI_Style__class_n002cOfSwLJrTZ__;
extern lv_style_t GUI_Style__class_1abYeqAld5P56d__;
extern lv_style_t GUI_Style__class_cwPM9CxRa12Qyy__;
extern lv_style_t GUI_Style__class_yHxcXp8cqLu0ui__;
extern lv_style_t GUI_Style__class_jOI9nE6TFcNPoM__;
extern lv_style_t GUI_Style__class_zJgqy9ArOZZy0E__;
extern lv_style_t GUI_Style__class_GyKLbCGuKaNDzW__;
extern lv_style_t GUI_Style__class_XoPeDgtroCqhpx__;
extern lv_style_t GUI_Style__class_4X35VrnWCgl6B8__;
extern lv_style_t GUI_Style__class_QP7bfjdOsHhuqA__;
extern lv_style_t GUI_Style__class_P87GKovshccWIa__;
extern lv_style_t GUI_Style__class_10IAZav9vNdPAu__;
extern lv_style_t GUI_Style__class_rVyrskz9HPCb78__;
extern lv_style_t GUI_Style__class_TAdw2bFZEN3aSX__;
extern lv_style_t GUI_Style__class_WPZpNDHn0lqSf0__;
extern lv_style_t GUI_Style__class_0QwDsznTVpqhxU__;
extern lv_style_t GUI_Style__class_DulD2FLtwrccBD__;
extern lv_style_t GUI_Style__class_GMXk5IrFD6FhPz__;
extern lv_style_t GUI_Style__class_038PfWRmwBRvrS__;
extern lv_style_t GUI_Style__class_qceAHAFVPr1iec__;
extern lv_style_t GUI_Style__class_qGEmkXlz0DXj3S__;
extern lv_style_t GUI_Style__class_hENnBAbfXYAPjn__;


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




void GUI_event__Button__screen_1__button_3__Released(lv_event_t * event);
void GUI_event__Label__screen_1__label_44__Clicked(lv_event_t * event);
void GUI_event__Button__screen_1__button_2__Clicked(lv_event_t * event);
void GUI_event__Button__screen__button_1__Clicked(lv_event_t * event);



#ifdef __cplusplus
} //extern "C"
#endif

#endif //_GUI_HEADER_INCLUDED

LV_IMG_DECLARE( upload_download__9__142x142_83b0827feb384e1889b95974462db75c_png );
LV_IMG_DECLARE( upload_image_142x142_94f6567eb02445419fdec27f34a3224b_png );
LV_IMG_DECLARE( upload_vector_49_15_120x4_10a324c47e6b455eae3a1c904328f4a3_png );
LV_IMG_DECLARE( upload_vector_49_14_8220x8000_8b0ff4dc0c6947be903accae0d5fc817_png );
LV_IMG_DECLARE( upload_frame_10_800x480_deae9b4c98214466b129acd5ae895ceb_png );
