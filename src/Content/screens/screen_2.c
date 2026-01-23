#include "../../GUI.h"



void GUI_initScreen__screen_2()
{
    GUI_Screen__screen_2 = lv_obj_create(NULL);
    lv_obj_remove_flag(GUI_Screen__screen_2, LV_OBJ_FLAG_SCROLLABLE);
    GUI_Image__screen_2__image_22 = lv_image_create(GUI_Screen__screen_2);
    lv_obj_add_flag(GUI_Image__screen_2__image_22, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_2__image_22, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_2__image_22, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_2__image_22, 1, -8);
    lv_obj_set_size(GUI_Image__screen_2__image_22, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_2__image_23 = lv_image_create(GUI_Screen__screen_2);
    lv_obj_add_flag(GUI_Image__screen_2__image_23, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_2__image_23, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_2__image_23, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_2__image_23, 210, -7);
    lv_obj_set_size(GUI_Image__screen_2__image_23, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Panel__screen_2__panel = lv_obj_create(GUI_Screen__screen_2);
    lv_obj_remove_flag(GUI_Panel__screen_2__panel, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Panel__screen_2__panel, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Panel__screen_2__panel, -184, -53);
    lv_obj_set_size(GUI_Panel__screen_2__panel, 336, 197);

    GUI_Panel__screen_2__panel_1 = lv_obj_create(GUI_Screen__screen_2);
    lv_obj_remove_flag(GUI_Panel__screen_2__panel_1, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Panel__screen_2__panel_1, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Panel__screen_2__panel_1, -184, 116);
    lv_obj_set_size(GUI_Panel__screen_2__panel_1, 336, 115);

    GUI_Label__screen_2__label_12 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_12, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_12, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_12, -195, 80);
    lv_obj_set_size(GUI_Label__screen_2__label_12, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_13 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_13, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_13, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_13, 5, 209);
    lv_obj_set_size(GUI_Label__screen_2__label_13, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_14 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_14, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_14, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_14, -234, -119);
    lv_obj_set_size(GUI_Label__screen_2__label_14, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_15 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_15, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_15, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_15, -273, -79);
    lv_obj_set_size(GUI_Label__screen_2__label_15, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_16 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_16, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_16, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_16, -261, -53);
    lv_obj_set_size(GUI_Label__screen_2__label_16, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_17 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_17, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_17, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_17, -243, 9);
    lv_obj_set_size(GUI_Label__screen_2__label_17, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_2__image_26 = lv_image_create(GUI_Screen__screen_2);
    lv_obj_add_flag(GUI_Image__screen_2__image_26, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_2__image_26, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_2__image_26, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_2__image_26, 369, 219);
    lv_obj_set_size(GUI_Image__screen_2__image_26, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_2__image_25 = lv_image_create(GUI_Screen__screen_2);
    lv_obj_add_flag(GUI_Image__screen_2__image_25, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_2__image_25, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_2__image_25, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_2__image_25, -372, -202);
    lv_obj_set_size(GUI_Image__screen_2__image_25, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_19 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_19, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_19, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_19, -215, 112);
    lv_obj_set_size(GUI_Label__screen_2__label_19, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_20 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_20, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_20, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_20, -224, 130);
    lv_obj_set_size(GUI_Label__screen_2__label_20, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_21 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_21, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_21, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_21, -202, 149);
    lv_obj_set_size(GUI_Label__screen_2__label_21, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_22 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_22, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_22, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_22, 215, 58);
    lv_obj_set_size(GUI_Label__screen_2__label_22, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_23 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_23, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_23, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_23, -151, -81);
    lv_obj_set_size(GUI_Label__screen_2__label_23, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_24 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_24, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_24, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_24, -151, -52);
    lv_obj_set_size(GUI_Label__screen_2__label_24, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_25 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_25, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_25, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_25, -194, -80);
    lv_obj_set_size(GUI_Label__screen_2__label_25, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_26 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_26, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_26, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_26, -193, -53);
    lv_obj_set_size(GUI_Label__screen_2__label_26, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_27 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_27, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_27, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_27, -124, 7);
    lv_obj_set_size(GUI_Label__screen_2__label_27, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_28 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_28, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_28, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_28, -92, 10);
    lv_obj_set_size(GUI_Label__screen_2__label_28, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_29 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_29, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_29, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_29, -243, -20);
    lv_obj_set_size(GUI_Label__screen_2__label_29, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_30 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_30, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_30, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_30, -311, 103);
    lv_obj_set_size(GUI_Label__screen_2__label_30, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_31 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_31, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_31, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_31, -311, 140);
    lv_obj_set_size(GUI_Label__screen_2__label_31, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_32 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_32, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_32, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_32, -311, 122);
    lv_obj_set_size(GUI_Label__screen_2__label_32, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_33 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_33, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_33, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_33, -318, -88);
    lv_obj_set_size(GUI_Label__screen_2__label_33, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_34 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_34, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_34, LV_ALIGN_CENTER);
    lv_obj_set_size(GUI_Label__screen_2__label_34, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_35 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_35, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_35, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_35, -319, -62);
    lv_obj_set_size(GUI_Label__screen_2__label_35, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Panel__screen_2__panel_2 = lv_obj_create(GUI_Screen__screen_2);
    lv_obj_remove_flag(GUI_Panel__screen_2__panel_2, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Panel__screen_2__panel_2, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Panel__screen_2__panel_2, 215, 97);
    lv_obj_set_size(GUI_Panel__screen_2__panel_2, 195, 18);

    GUI_Label__screen_2__label_36 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_36, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_36, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_36, 171, 97);
    lv_obj_set_size(GUI_Label__screen_2__label_36, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_37 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_37, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_37, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_37, 216, 90);
    lv_obj_set_size(GUI_Label__screen_2__label_37, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_38 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_38, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_38, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_38, 263, 97);
    lv_obj_set_size(GUI_Label__screen_2__label_38, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_39 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_39, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_39, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_39, 211, -99);
    lv_obj_set_size(GUI_Label__screen_2__label_39, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Panel__screen_2__panel_3 = lv_obj_create(GUI_Screen__screen_2);
    lv_obj_remove_flag(GUI_Panel__screen_2__panel_3, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Panel__screen_2__panel_3, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Panel__screen_2__panel_3, 211, -18);
    lv_obj_set_size(GUI_Panel__screen_2__panel_3, 165, 118);

    GUI_Label__screen_2__label_10 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_10, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_10, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_10, -91, -82);
    lv_obj_set_size(GUI_Label__screen_2__label_10, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_40 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_40, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_40, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_40, -91, -51);
    lv_obj_set_size(GUI_Label__screen_2__label_40, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_41 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_41, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_41, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_41, -119, -82);
    lv_obj_set_size(GUI_Label__screen_2__label_41, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_42 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_42, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_42, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_42, -120, -52);
    lv_obj_set_size(GUI_Label__screen_2__label_42, LV_SIZE_CONTENT, LV_SIZE_CONTENT);


    GUI_initScreenStyles__screen_2();
    GUI_initScreenTexts__screen_2();
}


void GUI_initScreenTexts__screen_2()
{
    lv_label_set_text(GUI_Label__screen_2__label_12, "Instructions");
    lv_label_set_text(GUI_Label__screen_2__label_13, "Thank you for recyling!");
    lv_label_set_text(GUI_Label__screen_2__label_14, "Items Recycled");
    lv_label_set_text(GUI_Label__screen_2__label_15, "PET Bottles ");
    lv_label_set_text(GUI_Label__screen_2__label_16, "Aluminum Cans");
    lv_label_set_text(GUI_Label__screen_2__label_17, "Total Amount");
    lv_label_set_text(GUI_Label__screen_2__label_19, "Scan barcode with your app");
    lv_label_set_text(GUI_Label__screen_2__label_20, "Confirm payment details");
    lv_label_set_text(GUI_Label__screen_2__label_21, "Receive instant credit to account");
    lv_label_set_text(GUI_Label__screen_2__label_22, "Use your app to scan");
    lv_label_set_text(GUI_Label__screen_2__label_23, "0");
    lv_label_set_text(GUI_Label__screen_2__label_24, "0");
    lv_label_set_text(GUI_Label__screen_2__label_25, ":");
    lv_label_set_text(GUI_Label__screen_2__label_26, ":");
    lv_label_set_text(GUI_Label__screen_2__label_27, ":");
    lv_label_set_text(GUI_Label__screen_2__label_28, "0");
    lv_label_set_text(GUI_Label__screen_2__label_29, "______________________________");
    lv_label_set_text(GUI_Label__screen_2__label_30, ".");
    lv_label_set_text(GUI_Label__screen_2__label_31, ".");
    lv_label_set_text(GUI_Label__screen_2__label_32, ".");
    lv_label_set_text(GUI_Label__screen_2__label_33, ".");
    lv_label_set_text(GUI_Label__screen_2__label_34, ".");
    lv_label_set_text(GUI_Label__screen_2__label_35, ".");
    lv_label_set_text(GUI_Label__screen_2__label_36, "Bank transfer ");
    lv_label_set_text(GUI_Label__screen_2__label_37, ".");
    lv_label_set_text(GUI_Label__screen_2__label_38, "Mobile Money");
    lv_label_set_text(GUI_Label__screen_2__label_39, "Scan to Receive Payment");
    lv_label_set_text(GUI_Label__screen_2__label_10, "0");
    lv_label_set_text(GUI_Label__screen_2__label_40, "0");
    lv_label_set_text(GUI_Label__screen_2__label_41, "x");
    lv_label_set_text(GUI_Label__screen_2__label_42, "x");
}


void GUI_initScreenStyles__screen_2()
{
    lv_obj_add_style(GUI_Screen__screen_2, &GUI_Style__class_mhPDSvBNA6VuzO__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__screen_2__image_22, &upload_vector_800x480_efe122e387d3452b82c309071d35b967_png);

    lv_image_set_src(GUI_Image__screen_2__image_23, &upload_vector_280x280_4922c0b2d11645ecb6964b5000ff7e59_png);

    lv_obj_add_style(GUI_Image__screen_2__image_23, &GUI_Style__class_MFpfIYNsSfjfst__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Panel__screen_2__panel_1, &GUI_Style__class_w8aa4Wgu56NrT7__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_12, &GUI_Style__class_bYrhIpa3hAPt93__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_13, &GUI_Style__class_wIKUNlKUt1gtjQ__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_14, &GUI_Style__class_CFVbTuAuXyTYRx__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_15, &GUI_Style__class_aAzgrLf0yJQMoM__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_16, &GUI_Style__class_C4oXuKkvBfbYTF__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_17, &GUI_Style__class_cBDGzGQtVdkAoZ__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__screen_2__image_26, &upload_vector_120x120_42befb7f73aa4429aa80d754d7a5b864_png);

    lv_image_set_src(GUI_Image__screen_2__image_25, &upload_vector_80x80_7e603fce42ac472dae47fb7775f1ab4e_png);

    lv_obj_add_style(GUI_Label__screen_2__label_19, &GUI_Style__class_BMysOVZkx6CUfW__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_20, &GUI_Style__class_kMk2gVzGoaK67Q__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_21, &GUI_Style__class_uuZVZjjdStMBuo__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_22, &GUI_Style__class_I8rZM97f8JewMC__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_23, &GUI_Style__class_4uDnY5PDbQXDBx__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_24, &GUI_Style__class_w6pG0SdAzIU58B__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_25, &GUI_Style__class_bQBl578tfWLPHd__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_26, &GUI_Style__class_cphzecocykUnhG__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_27, &GUI_Style__class_hJcZRKmuzocpAr__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_28, &GUI_Style__class_IZ8gmLq6qtSQAV__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_30, &GUI_Style__class_2SZkPd6E8g4kkg__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_31, &GUI_Style__class_xW7W8qhVWWAtf0__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_32, &GUI_Style__class_eFvrWhjiiVOUdP__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_33, &GUI_Style__class_6rLUh02ae3r8gD__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_34, &GUI_Style__class_2jQRUzDJArXrzI__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_35, &GUI_Style__class_f79iwk6LcmcMaX__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Panel__screen_2__panel_2, &GUI_Style__class_Z7SFLrb0RLstLW__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_36, &GUI_Style__class_rF82vjwrhcW0oH__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_37, &GUI_Style__class_B46HWQWH7QIJbr__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_38, &GUI_Style__class_nVw4qdGY6HBqKi__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_39, &GUI_Style__class_mh9wzA6HJVCk9J__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_10, &GUI_Style__class_kI9wn6boIxbVK1__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_40, &GUI_Style__class_zxsttoDlU8R73i__, LV_PART_MAIN | LV_STATE_DEFAULT);

}


