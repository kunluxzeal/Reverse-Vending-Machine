#include "../../GUI.h"



void GUI_initScreen__screen_2()
{
    GUI_Screen__screen_2 = lv_obj_create(NULL);
    lv_obj_remove_flag(GUI_Screen__screen_2, LV_OBJ_FLAG_SCROLLABLE);
    GUI_Image__screen_2__Frame_10_3 = lv_image_create(GUI_Screen__screen_2);
    lv_obj_remove_flag(GUI_Image__screen_2__Frame_10_3, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_2__Frame_10_3, LV_ALIGN_CENTER);
    lv_obj_set_size(GUI_Image__screen_2__Frame_10_3, 800, 480);

    GUI_Label__screen_2__label_46 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_46, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_46, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_46, -21, -209);
    lv_obj_set_size(GUI_Label__screen_2__label_46, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Panel__screen_2__Rectangle_5 = lv_obj_create(GUI_Screen__screen_2);
    lv_obj_remove_flag(GUI_Panel__screen_2__Rectangle_5, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Panel__screen_2__Rectangle_5, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Panel__screen_2__Rectangle_5, 169, -5);
    lv_obj_set_size(GUI_Panel__screen_2__Rectangle_5, 340, 322);

    GUI_Label__screen_2__label_47 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_47, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_47, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_47, 169, -125);
    lv_obj_set_size(GUI_Label__screen_2__label_47, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_48 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_48, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_48, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_48, 163, 78);
    lv_obj_set_size(GUI_Label__screen_2__label_48, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_49 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_49, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_49, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_49, 165, 115);
    lv_obj_set_size(GUI_Label__screen_2__label_49, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Panel__screen_2__Rectangle_6 = lv_obj_create(GUI_Screen__screen_2);
    lv_obj_remove_flag(GUI_Panel__screen_2__Rectangle_6, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Panel__screen_2__Rectangle_6, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Panel__screen_2__Rectangle_6, -193, -80);
    lv_obj_set_size(GUI_Panel__screen_2__Rectangle_6, 329, 170);

    GUI_Label__screen_2__label_50 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_50, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_50, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_50, -256, -132);
    lv_obj_set_size(GUI_Label__screen_2__label_50, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_51 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_51, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_51, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_51, -291, -102);
    lv_obj_set_size(GUI_Label__screen_2__label_51, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_52 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_52, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_52, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_52, -270, -74);
    lv_obj_set_size(GUI_Label__screen_2__label_52, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_2__image_5 = lv_image_create(GUI_Screen__screen_2);
    lv_obj_add_flag(GUI_Image__screen_2__image_5, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_2__image_5, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_2__image_5, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_2__image_5, -273, -51);
    lv_obj_set_size(GUI_Image__screen_2__image_5, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_53 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_53, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_53, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_53, -265, -29);
    lv_obj_set_size(GUI_Label__screen_2__label_53, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_54 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_54, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_54, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_54, -169, -104);
    lv_obj_set_size(GUI_Label__screen_2__label_54, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_55 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_55, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_55, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_55, -169, -77);
    lv_obj_set_size(GUI_Label__screen_2__label_55, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Panel__screen_2__Rectangle_7 = lv_obj_create(GUI_Screen__screen_2);
    lv_obj_remove_flag(GUI_Panel__screen_2__Rectangle_7, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Panel__screen_2__Rectangle_7, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Panel__screen_2__Rectangle_7, -194, 91);
    lv_obj_set_size(GUI_Panel__screen_2__Rectangle_7, 329, 137);

    GUI_Label__screen_2__label_1 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_1, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_1, -128, -103);
    lv_obj_set_size(GUI_Label__screen_2__label_1, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_2 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_2, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_2, -128, -76);
    lv_obj_set_size(GUI_Label__screen_2__label_2, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2___114_1 = lv_label_create(GUI_Screen__screen_2);
    lv_obj_remove_flag(GUI_Label__screen_2___114_1, LV_OBJ_FLAG_SCROLLABLE);
    lv_label_set_long_mode(GUI_Label__screen_2___114_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2___114_1, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2___114_1, -130, -28);
    lv_obj_set_size(GUI_Label__screen_2___114_1, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_3 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_3, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_3, -169, -28);
    lv_obj_set_size(GUI_Label__screen_2__label_3, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_56 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_56, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_56, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_56, -102, -27);
    lv_obj_set_size(GUI_Label__screen_2__label_56, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_57 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_57, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_57, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_57, -196, 42);
    lv_obj_set_size(GUI_Label__screen_2__label_57, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_58 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_58, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_58, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_58, -199, 70);
    lv_obj_set_size(GUI_Label__screen_2__label_58, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_59 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_59, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_59, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_59, -210, 100);
    lv_obj_set_size(GUI_Label__screen_2__label_59, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_60 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_60, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_60, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_60, -179, 130);
    lv_obj_set_size(GUI_Label__screen_2__label_60, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_61 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_61, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_61, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_61, -333, 61);
    lv_obj_set_size(GUI_Label__screen_2__label_61, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_4 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_4, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_4, -333, 92);
    lv_obj_set_size(GUI_Label__screen_2__label_4, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_5 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_5, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_5, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_5, -333, 121);
    lv_obj_set_size(GUI_Label__screen_2__label_5, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_2__label_6 = lv_label_create(GUI_Screen__screen_2);
    lv_label_set_long_mode(GUI_Label__screen_2__label_6, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_2__label_6, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_2__label_6, -7, 207);
    lv_obj_set_size(GUI_Label__screen_2__label_6, LV_SIZE_CONTENT, LV_SIZE_CONTENT);


    GUI_initScreenStyles__screen_2();
    GUI_initScreenTexts__screen_2();
}


void GUI_initScreenTexts__screen_2()
{
    lv_label_set_text(GUI_Label__screen_2__label_46, "Payment");
    lv_label_set_text(GUI_Label__screen_2__label_47, "Scan to Receive Payment");
    lv_label_set_text(GUI_Label__screen_2__label_48, "2026-500-001");
    lv_label_set_text(GUI_Label__screen_2__label_49, "Transaction ID :TXN202650001");
    lv_label_set_text(GUI_Label__screen_2__label_50, "Items Recycled");
    lv_label_set_text(GUI_Label__screen_2__label_51, "PET Bottles");
    lv_label_set_text(GUI_Label__screen_2__label_52, "Aluminum Cans");
    lv_label_set_text(GUI_Label__screen_2__label_53, "Total Amount");
    lv_label_set_text(GUI_Label__screen_2__label_54, ":");
    lv_label_set_text(GUI_Label__screen_2__label_55, ":");
    lv_label_set_text(GUI_Label__screen_2__label_1, "0");
    lv_label_set_text(GUI_Label__screen_2__label_2, "0");
    lv_label_set_text(GUI_Label__screen_2___114_1, "₦");
    lv_label_set_text(GUI_Label__screen_2__label_3, ":");
    lv_label_set_text(GUI_Label__screen_2__label_56, "0");
    lv_label_set_text(GUI_Label__screen_2__label_57, "Instructions");
    lv_label_set_text(GUI_Label__screen_2__label_58, "Scan barcode with your app");
    lv_label_set_text(GUI_Label__screen_2__label_59, "Confirm payment details");
    lv_label_set_text(GUI_Label__screen_2__label_60, "Receive instant credit to account");
    lv_label_set_text(GUI_Label__screen_2__label_61, ".");
    lv_label_set_text(GUI_Label__screen_2__label_4, ".");
    lv_label_set_text(GUI_Label__screen_2__label_5, ".");
    lv_label_set_text(GUI_Label__screen_2__label_6, "Thank You for recycling with EcoBarter !");
}


void GUI_initScreenStyles__screen_2()
{
    lv_image_set_src(GUI_Image__screen_2__Frame_10_3, &upload_frame_10_800x480_deae9b4c98214466b129acd5ae895ceb_png);

    lv_obj_add_style(GUI_Image__screen_2__Frame_10_3, &GUI_Style__class_JleJOa11p2Tms1__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_46, &GUI_Style__class_6zGU6IFihRZGBk__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Panel__screen_2__Rectangle_5, &GUI_Style__class_9LZS4gK3UEjKnZ__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_47, &GUI_Style__class_PXUEzya4ioBKIS__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_48, &GUI_Style__class_oDzwkkUxCjNeXt__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_49, &GUI_Style__class_6koEsaD90WKMso__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Panel__screen_2__Rectangle_6, &GUI_Style__class_Nk1oc9gSvZG2vJ__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_50, &GUI_Style__class_Z97Y0XvDAtxUaR__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_51, &GUI_Style__class_Y33ZOMV5J9ehRi__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_52, &GUI_Style__class_JYlKbgrw02M15H__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__screen_2__image_5, &upload_vector_49_15_120x4_10a324c47e6b455eae3a1c904328f4a3_png);

    lv_obj_add_style(GUI_Image__screen_2__image_5, &GUI_Style__class_W9paFAEM9vWTjp__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_53, &GUI_Style__class_UsF2f7YfE4e29z__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_54, &GUI_Style__class_iZBcdDzacyRpS1__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_55, &GUI_Style__class_rNvDpqPoaHLDTz__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Panel__screen_2__Rectangle_7, &GUI_Style__class_n002cOfSwLJrTZ__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_1, &GUI_Style__class_1abYeqAld5P56d__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_2, &GUI_Style__class_cwPM9CxRa12Qyy__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2___114_1, &GUI_Style__class_yHxcXp8cqLu0ui__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_3, &GUI_Style__class_jOI9nE6TFcNPoM__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_56, &GUI_Style__class_zJgqy9ArOZZy0E__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_57, &GUI_Style__class_GyKLbCGuKaNDzW__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_58, &GUI_Style__class_XoPeDgtroCqhpx__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_59, &GUI_Style__class_4X35VrnWCgl6B8__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_60, &GUI_Style__class_QP7bfjdOsHhuqA__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_61, &GUI_Style__class_P87GKovshccWIa__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_4, &GUI_Style__class_10IAZav9vNdPAu__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_5, &GUI_Style__class_rVyrskz9HPCb78__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_2__label_6, &GUI_Style__class_TAdw2bFZEN3aSX__, LV_PART_MAIN | LV_STATE_DEFAULT);

}


