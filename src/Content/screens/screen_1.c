#include "../../GUI.h"



void GUI_initScreen__screen_1()
{
    GUI_Screen__screen_1 = lv_obj_create(NULL);
    lv_obj_remove_flag(GUI_Screen__screen_1, LV_OBJ_FLAG_SCROLLABLE);
    GUI_Image__screen_1__Frame_10_2 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_remove_flag(GUI_Image__screen_1__Frame_10_2, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__Frame_10_2, LV_ALIGN_CENTER);
    lv_obj_set_size(GUI_Image__screen_1__Frame_10_2, 800, 480);

    GUI_Label__screen_1__label_38 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_38, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_38, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_38, -5, -211);
    lv_obj_set_size(GUI_Label__screen_1__label_38, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_1__label_39 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_39, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_39, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_39, -3, -179);
    lv_obj_set_size(GUI_Label__screen_1__label_39, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Panel__screen_1__Rectangle_3 = lv_obj_create(GUI_Screen__screen_1);
    lv_obj_remove_flag(GUI_Panel__screen_1__Rectangle_3, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Panel__screen_1__Rectangle_3, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Panel__screen_1__Rectangle_3, -175, -4);
    lv_obj_set_size(GUI_Panel__screen_1__Rectangle_3, 285, 285);

    GUI_Image__screen_1__image_3 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_3, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_3, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_3, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_3, -176, -48);
    lv_obj_set_size(GUI_Image__screen_1__image_3, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_1__label_40 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_40, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_40, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_40, -174, 33);
    lv_obj_set_size(GUI_Label__screen_1__label_40, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Panel__screen_1__panel_2 = lv_obj_create(GUI_Screen__screen_1);
    lv_obj_remove_flag(GUI_Panel__screen_1__panel_2, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Panel__screen_1__panel_2, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Panel__screen_1__panel_2, -178, 87);
    lv_obj_set_size(GUI_Panel__screen_1__panel_2, 66, 39);

    GUI_Label__screen_1__label_41 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_41, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_41, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_41, -178, 88);
    lv_obj_set_size(GUI_Label__screen_1__label_41, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Panel__screen_1__Rectangle_4 = lv_obj_create(GUI_Screen__screen_1);
    lv_obj_remove_flag(GUI_Panel__screen_1__Rectangle_4, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Panel__screen_1__Rectangle_4, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Panel__screen_1__Rectangle_4, 170, -3);
    lv_obj_set_size(GUI_Panel__screen_1__Rectangle_4, 285, 285);

    GUI_Image__screen_1__image_4 = lv_image_create(GUI_Screen__screen_1);
    lv_obj_add_flag(GUI_Image__screen_1__image_4, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen_1__image_4, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen_1__image_4, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen_1__image_4, 166, -42);
    lv_obj_set_size(GUI_Image__screen_1__image_4, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen_1__label_42 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_42, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_42, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_42, 170, 38);
    lv_obj_set_size(GUI_Label__screen_1__label_42, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Panel__screen_1__panel_3 = lv_obj_create(GUI_Screen__screen_1);
    lv_obj_remove_flag(GUI_Panel__screen_1__panel_3, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Panel__screen_1__panel_3, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Panel__screen_1__panel_3, 173, 89);
    lv_obj_set_size(GUI_Panel__screen_1__panel_3, 66, 39);

    GUI_Label__screen_1__label_43 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_43, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_43, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_43, 173, 90);
    lv_obj_set_size(GUI_Label__screen_1__label_43, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Button__screen_1__button_3 = lv_button_create(GUI_Screen__screen_1);
    lv_obj_set_align(GUI_Button__screen_1__button_3, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Button__screen_1__button_3, 277, 199);
    lv_obj_set_size(GUI_Button__screen_1__button_3, 89, 46);
    lv_obj_add_event_cb(GUI_Button__screen_1__button_3, GUI_event__Button__screen_1__button_3__Released, LV_EVENT_RELEASED,
                        NULL);

    GUI_Label__screen_1__label_44 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_44, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_44, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_44, 277, 200);
    lv_obj_set_size(GUI_Label__screen_1__label_44, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_add_event_cb(GUI_Label__screen_1__label_44, GUI_event__Label__screen_1__label_44__Clicked, LV_EVENT_CLICKED,
                        NULL);

    GUI_Button__screen_1__button_2 = lv_button_create(GUI_Screen__screen_1);
    lv_obj_set_align(GUI_Button__screen_1__button_2, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Button__screen_1__button_2, -268, 199);
    lv_obj_set_size(GUI_Button__screen_1__button_2, 89, 46);
    lv_obj_add_event_cb(GUI_Button__screen_1__button_2, GUI_event__Button__screen_1__button_2__Clicked, LV_EVENT_CLICKED,
                        NULL);

    GUI_Label__screen_1__label_45 = lv_label_create(GUI_Screen__screen_1);
    lv_label_set_long_mode(GUI_Label__screen_1__label_45, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen_1__label_45, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen_1__label_45, -267, 200);
    lv_obj_set_size(GUI_Label__screen_1__label_45, LV_SIZE_CONTENT, LV_SIZE_CONTENT);


    GUI_initScreenStyles__screen_1();
    GUI_initScreenTexts__screen_1();
}


void GUI_initScreenTexts__screen_1()
{
    lv_label_set_text(GUI_Label__screen_1__label_38, "Insert Your Items");
    lv_label_set_text(GUI_Label__screen_1__label_39, "Then Press DONE when done");
    lv_label_set_text(GUI_Label__screen_1__label_40, "Plastic Bottles");
    lv_label_set_text(GUI_Label__screen_1__label_41, "0");
    lv_label_set_text(GUI_Label__screen_1__label_42, "Aluminum Cans");
    lv_label_set_text(GUI_Label__screen_1__label_43, "0");
    lv_label_set_text(GUI_Label__screen_1__label_44, "DONE");
    lv_label_set_text(GUI_Label__screen_1__label_45, "NEXT");
}


void GUI_initScreenStyles__screen_1()
{
    lv_image_set_src(GUI_Image__screen_1__Frame_10_2, &upload_frame_10_800x480_deae9b4c98214466b129acd5ae895ceb_png);

    lv_obj_add_style(GUI_Image__screen_1__Frame_10_2, &GUI_Style__class_7RENjibWdasR4O__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_1__label_38, &GUI_Style__class_y69jT0b1QSBPpf__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_1__label_39, &GUI_Style__class_ZK7FjaNhsfHeQS__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Panel__screen_1__Rectangle_3, &GUI_Style__class_boV2ZyGlHzy3zb__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__screen_1__image_3, &upload_download__9__142x142_83b0827feb384e1889b95974462db75c_png);

    lv_obj_add_style(GUI_Label__screen_1__label_40, &GUI_Style__class_x9hJ8FVRSbmktn__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Panel__screen_1__panel_2, &GUI_Style__class_Y2Oy4NEwz6BG3B__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_1__label_41, &GUI_Style__class_PwXoQqgKmGiZTH__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Panel__screen_1__Rectangle_4, &GUI_Style__class_osNj3MNYgQnfJq__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__screen_1__image_4, &upload_image_142x142_94f6567eb02445419fdec27f34a3224b_png);

    lv_obj_add_style(GUI_Label__screen_1__label_42, &GUI_Style__class_cpmDDpe00NUNAi__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Panel__screen_1__panel_3, &GUI_Style__class_v6UlzNmnCRoeVI__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_1__label_43, &GUI_Style__class_kFZj5PDetKtfBP__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Button__screen_1__button_3, &GUI_Style__class_uLQ0yf80LYxVDo__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_1__label_44, &GUI_Style__class_RhrXZpFdUZFGEg__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Button__screen_1__button_2, &GUI_Style__class_oMLJ4j9MKloKZa__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen_1__label_45, &GUI_Style__class_q7sqH97pra4J3v__, LV_PART_MAIN | LV_STATE_DEFAULT);

}


