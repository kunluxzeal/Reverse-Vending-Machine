#include "../../GUI.h"



void GUI_initScreen__screen_1()
{
    GUI_Screen__screen_1 = lv_obj_create(NULL);
    lv_obj_remove_flag(GUI_Screen__screen_1, LV_OBJ_FLAG_SCROLLABLE);
    GUI_Image__screen_1__image_3 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_3, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_3, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_3, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_3, -1, 1);
    lv_obj_set_size(GUI_Image__screen_1__image_3, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__image_5 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_5, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_5, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_5, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_5, -175, -5);
    lv_obj_set_size(GUI_Image__screen_1__image_5, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__image_6 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_6, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_6, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_6, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_6, 178, -4);
    lv_obj_set_size(GUI_Image__screen_1__image_6, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__image_9 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_9, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_9, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_9, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_9, -176, -57);
    lv_obj_set_size(GUI_Image__screen_1__image_9, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__image_10 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_10, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_10, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_10, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_10, -175, -114);
    lv_obj_set_size(GUI_Image__screen_1__image_10, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__image_11 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_11, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_11, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_11, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_11, -176, -53);
    lv_obj_set_size(GUI_Image__screen_1__image_11, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__Vector = lv_image_create(GUI_Screen__screen_1);
    lv_obj_remove_flag(GUI_Image__screen_1__Vector, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__Vector, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__Vector, -175, -93);
    lv_obj_set_size(GUI_Image__screen_1__Vector, 24, 25);

    GUI_Image__screen_1__image_12 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_12, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_12, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_12, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_12, -177, 63);
    lv_obj_set_size(GUI_Image__screen_1__image_12, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__image_13 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_13, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_13, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_13, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_13, 351, -208);
    lv_obj_set_size(GUI_Image__screen_1__image_13, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__image_14 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_14, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_14, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_14, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_14, -355, -197);
    lv_obj_set_size(GUI_Image__screen_1__image_14, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_1__label_4 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_4, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_4, -172, 11);
    lv_obj_set_size(GUI_Label__screen_1__label_4, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__image_15 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_15, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_15, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_15, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_15, -615, -39);
    lv_obj_set_size(GUI_Image__screen_1__image_15, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__image_16 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_16, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_16, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_16, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_16, -1251, 64);
    lv_obj_set_size(GUI_Image__screen_1__image_16, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__image_17 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_17, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_17, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_17, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_17, 173, -60);
    lv_obj_set_size(GUI_Image__screen_1__image_17, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__image_18 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_18, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_18, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_18, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_18, 173, -20);
    lv_obj_set_size(GUI_Image__screen_1__image_18, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__image_19 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_19, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_19, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_19, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_19, 173, -98);
    lv_obj_set_size(GUI_Image__screen_1__image_19, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__image_20 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_20, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_20, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_20, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_20, 173, -55);
    lv_obj_set_size(GUI_Image__screen_1__image_20, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_1__label_5 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_5, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_5, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_5, 180, 26);
    lv_obj_set_size(GUI_Label__screen_1__label_5, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen_1__image_21 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_21, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_21, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_21, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_21, 179, 62);
    lv_obj_set_size(GUI_Image__screen_1__image_21, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_1__label_6 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_6, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_6, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_6, -179, 62);
    lv_obj_set_size(GUI_Label__screen_1__label_6, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_1__label_7 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_7, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_7, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_7, 178, 61);
    lv_obj_set_size(GUI_Label__screen_1__label_7, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_1__label_8 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_8, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_8, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_8, 8, -197);
    lv_obj_set_size(GUI_Label__screen_1__label_8, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_1__label_9 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_9, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_9, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_9, 6, 197);
    lv_obj_set_size(GUI_Label__screen_1__label_9, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Button__screen_1__button_1 = lv_button_create(GUI_Screen__screen_1);
    lv_obj_set_align(GUI_Button__screen_1__button_1, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Button__screen_1__button_1, 279, 194);
    lv_obj_set_size(GUI_Button__screen_1__button_1, 98, 35);
    lv_obj_add_event_cb(GUI_Button__screen_1__button_1, GUI_event__Button__screen_1__button_1__Released, LV_EVENT_RELEASED,
                        NULL);

    GUI_Label__screen_1__label = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label, 280, 195);
    lv_obj_set_size(GUI_Label__screen_1__label, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Button__screen_1__button_2 = lv_button_create(GUI_Screen__screen_1);
    lv_obj_set_align(GUI_Button__screen_1__button_2, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Button__screen_1__button_2, -269, 187);
    lv_obj_set_size(GUI_Button__screen_1__button_2, 91, 38);

    GUI_Label__screen_1__label_3 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_3, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_3, -268, 188);
    lv_obj_set_size(GUI_Label__screen_1__label_3, LV_SIZE_CONTENT, LV_SIZE_CONTENT);


    GUI_initScreenStyles__screen_1();
    GUI_initScreenTexts__screen_1();
}


void GUI_initScreenTexts__screen_1()
{
    //lv_label_set_text(GUI_Label__screen_1__label_4, "PET Bottles");
    lv_label_set_text(GUI_Label__screen_1__label_4, "Cups");
    lv_label_set_text(GUI_Label__screen_1__label_5, "Batteries\n");
    // lv_label_set_text(GUI_Label__screen_1__label_5, "Aluminum Cans\n");
    lv_label_set_text(GUI_Label__screen_1__label_6, "0");
    lv_label_set_text(GUI_Label__screen_1__label_7, "0");
    lv_label_set_text(GUI_Label__screen_1__label_8, "Insert Your Items");
    lv_label_set_text(GUI_Label__screen_1__label_9, "Insert items  Press DONE when done");
    lv_label_set_text(GUI_Label__screen_1__label, "DONE");
    lv_label_set_text(GUI_Label__screen_1__label_3, "CONTINUE");
}


void GUI_initScreenStyles__screen_1()
{
    lv_image_set_src(GUI_Image__screen_1__image_3, &upload_vector_800x480_efe122e387d3452b82c309071d35b967_png);

    lv_image_set_src(GUI_Image__screen_1__image_5, &upload_vector_280x280_4922c0b2d11645ecb6964b5000ff7e59_png);

    lv_image_set_src(GUI_Image__screen_1__image_6, &upload_vector_280x280_4922c0b2d11645ecb6964b5000ff7e59_png);

    lv_image_set_src(GUI_Image__screen_1__image_9, &upload_vector_56x90_5c52ae5171e846908af8ce8513b83bf4_png);

    lv_image_set_src(GUI_Image__screen_1__image_10, &upload_vector_30x15_adaac31bac844762adf5da297da2223a_png);

    lv_image_set_src(GUI_Image__screen_1__image_11, &upload_vector_44x30_7b32e144298344d4a7e274cb468fbedd_png);

    lv_image_set_src(GUI_Image__screen_1__Vector, &upload_vector_24x25_90319e29db3c4a63970161315d1a1ecb_png);

    lv_image_set_src(GUI_Image__screen_1__image_12, &upload_vector_100x50_287c335e4fd947c8b62a60dbfe9a07a1_png);

    lv_image_set_src(GUI_Image__screen_1__image_13, &upload_vector_120x120_42befb7f73aa4429aa80d754d7a5b864_png);

    lv_image_set_src(GUI_Image__screen_1__image_14, &upload_vector_80x80_7e603fce42ac472dae47fb7775f1ab4e_png);

    lv_obj_add_style(GUI_Label__screen_1__label_4, &GUI_Style__class_VMBuGvCKD78y4b__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__screen_1__image_15, &upload_vector_24x25_90319e29db3c4a63970161315d1a1ecb_png);

    lv_image_set_src(GUI_Image__screen_1__image_16, &upload_vector_250x60_6d44a08093064a28909ca60ec19b42df_png);

    lv_image_set_src(GUI_Image__screen_1__image_17, &upload_vector_60x80_5c0471f6a5f94344818414c1aad5a69d_png);

    lv_image_set_src(GUI_Image__screen_1__image_18, &upload_vector_60x20_eea473bc133e47ed9f502d07275c056a_png);

    lv_image_set_src(GUI_Image__screen_1__image_19, &upload_vector_56x20_71b2ced0f46c4eb9b37578de89e4756d_png);

    lv_image_set_src(GUI_Image__screen_1__image_20, &upload_vector_50x30_a63f5fdb173a49b99b771acabba63927_png);

    lv_obj_add_style(GUI_Label__screen_1__label_5, &GUI_Style__class_Qw3ndIBhuQ1A0q__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__screen_1__image_21, &upload_vector_100x50_287c335e4fd947c8b62a60dbfe9a07a1_png);

    lv_obj_add_style(GUI_Label__screen_1__label_6, &GUI_Style__class_OLNEJJ2Wf2vqI9__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_1__label_7, &GUI_Style__class_p7h5X7PAzOZdRP__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_1__label_8, &GUI_Style__class_myVaHjF4Ecf1Jr__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_1__label_9, &GUI_Style__class_piEN5JGAcXDaVy__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Button__screen_1__button_1, &GUI_Style__class_B54ZoJjVQ9sne5__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_1__label, &GUI_Style__class_Bg4YvsQw8dmJUH__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Button__screen_1__button_2, &GUI_Style__class_3HyzklTt8nb1er__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_1__label_3, &GUI_Style__class_xCua8hAkTrHUOV__, LV_PART_MAIN | LV_STATE_DEFAULT);

}


