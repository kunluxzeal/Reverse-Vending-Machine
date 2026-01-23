#include "../../GUI.h"



void GUI_initScreen__screen()
{
    GUI_Screen__screen = lv_obj_create(NULL);
    lv_obj_remove_flag(GUI_Screen__screen, LV_OBJ_FLAG_SCROLLABLE);
    GUI_Image__screen__Vector = lv_image_create(GUI_Screen__screen);
    lv_obj_remove_flag(GUI_Image__screen__Vector, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen__Vector, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen__Vector, -1, -2);
    lv_obj_set_size(GUI_Image__screen__Vector, 800, 480);

    GUI_Image__screen__Vector__image_OEpXKomvx3fNNR = lv_image_create(GUI_Screen__screen);
    lv_obj_remove_flag(GUI_Image__screen__Vector__image_OEpXKomvx3fNNR, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen__Vector__image_OEpXKomvx3fNNR, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen__Vector__image_OEpXKomvx3fNNR, 1067, -2);
    lv_obj_set_size(GUI_Image__screen__Vector__image_OEpXKomvx3fNNR, 280, 280);

    GUI_Label__screen__EcoBarter = lv_label_create(GUI_Screen__screen);
    lv_obj_remove_flag(GUI_Label__screen__EcoBarter, LV_OBJ_FLAG_SCROLLABLE);
    lv_label_set_long_mode(GUI_Label__screen__EcoBarter, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen__EcoBarter, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen__EcoBarter, -1, -193);
    lv_obj_set_size(GUI_Label__screen__EcoBarter, 437, 75);

    GUI_Image__screen__image = lv_image_create(GUI_Screen__screen);
    lv_obj_add_flag(GUI_Image__screen__image, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen__image, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen__image, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen__image, 335, -177);
    lv_obj_set_size(GUI_Image__screen__image, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen__image_1 = lv_image_create(GUI_Screen__screen);
    lv_obj_add_flag(GUI_Image__screen__image_1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_remove_flag(GUI_Image__screen__image_1, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen__image_1, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen__image_1, -17, -82);
    lv_obj_set_size(GUI_Image__screen__image_1, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen__Niara = lv_label_create(GUI_Screen__screen);
    lv_obj_remove_flag(GUI_Label__screen__Niara, LV_OBJ_FLAG_SCROLLABLE);
    lv_label_set_long_mode(GUI_Label__screen__Niara, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen__Niara, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen__Niara, 31, -112);
    lv_obj_set_size(GUI_Label__screen__Niara, 30, 31);

    GUI_Image__screen__Vector__image_7w7SSHR9F4I0RZ = lv_image_create(GUI_Screen__screen);
    lv_obj_remove_flag(GUI_Image__screen__Vector__image_7w7SSHR9F4I0RZ, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen__Vector__image_7w7SSHR9F4I0RZ, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen__Vector__image_7w7SSHR9F4I0RZ, -14, -73);
    lv_obj_set_size(GUI_Image__screen__Vector__image_7w7SSHR9F4I0RZ, 25, 30);

    GUI_Image__screen__Vector__image_N42RY2wWj1ffOR = lv_image_create(GUI_Screen__screen);
    lv_obj_remove_flag(GUI_Image__screen__Vector__image_N42RY2wWj1ffOR, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen__Vector__image_N42RY2wWj1ffOR, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen__Vector__image_N42RY2wWj1ffOR, -22, -80);
    lv_obj_set_size(GUI_Image__screen__Vector__image_N42RY2wWj1ffOR, 30, 30);

    GUI_Image__screen__Vector__image_U0R0CdtSbx5EuB = lv_image_create(GUI_Screen__screen);
    lv_obj_remove_flag(GUI_Image__screen__Vector__image_U0R0CdtSbx5EuB, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen__Vector__image_U0R0CdtSbx5EuB, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen__Vector__image_U0R0CdtSbx5EuB, -14, -86);
    lv_obj_set_size(GUI_Image__screen__Vector__image_U0R0CdtSbx5EuB, 25, 30);

    GUI_Image__screen__Vector__image_vc7Mw8cBAbXYEN = lv_image_create(GUI_Screen__screen);
    lv_obj_remove_flag(GUI_Image__screen__Vector__image_vc7Mw8cBAbXYEN, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen__Vector__image_vc7Mw8cBAbXYEN, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen__Vector__image_vc7Mw8cBAbXYEN, -320, 178);
    lv_obj_set_size(GUI_Image__screen__Vector__image_vc7Mw8cBAbXYEN, 80, 80);

    GUI_Label__screen__label_1 = lv_label_create(GUI_Screen__screen);
    lv_label_set_long_mode(GUI_Label__screen__label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen__label_1, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen__label_1, 11, 15);
    lv_obj_set_size(GUI_Label__screen__label_1, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen__label_2 = lv_label_create(GUI_Screen__screen);
    lv_label_set_long_mode(GUI_Label__screen__label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen__label_2, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen__label_2, -6, 65);
    lv_obj_set_size(GUI_Label__screen__label_2, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen__label_18 = lv_label_create(GUI_Screen__screen);
    lv_label_set_long_mode(GUI_Label__screen__label_18, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen__label_18, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen__label_18, -18, 203);
    lv_obj_set_size(GUI_Label__screen__label_18, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_add_event_cb(GUI_Label__screen__label_18, GUI_event__Label__screen__label_18__Clicked, LV_EVENT_CLICKED, NULL);

    GUI_Button__screen__button = lv_button_create(GUI_Screen__screen);
    lv_obj_set_align(GUI_Button__screen__button, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Button__screen__button, -13, 146);
    lv_obj_set_size(GUI_Button__screen__button, 206, 64);
    lv_obj_add_event_cb(GUI_Button__screen__button, GUI_event__Button__screen__button__Clicked, LV_EVENT_CLICKED, NULL);

    GUI_Label__screen__label_43 = lv_label_create(GUI_Screen__screen);
    lv_label_set_long_mode(GUI_Label__screen__label_43, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen__label_43, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen__label_43, -14, 167);
    lv_obj_set_size(GUI_Label__screen__label_43, LV_SIZE_CONTENT, LV_SIZE_CONTENT);


    GUI_initScreenStyles__screen();
    GUI_initScreenTexts__screen();
}


void GUI_initScreenTexts__screen()
{
    lv_label_set_text(GUI_Label__screen__EcoBarter, ("EcoCycle") );
    lv_label_set_text(GUI_Label__screen__Niara, ("₦"));
    lv_label_set_text(GUI_Label__screen__label_1, "Recycle to Earn cash");
    lv_label_set_text(GUI_Label__screen__label_2, "Turn your PET bottles and cans to instant reward");
    lv_label_set_text(GUI_Label__screen__label_18, "Insert bottles and cans to begin");
    lv_label_set_text(GUI_Label__screen__label_43, "START\n");
}





void GUI_initScreenStyles__screen()
{
    lv_image_set_src(GUI_Image__screen__Vector, &upload_vector_800x480_efe122e387d3452b82c309071d35b967_png);

    lv_image_set_src(GUI_Image__screen__Vector__image_OEpXKomvx3fNNR,
                     &upload_vector_280x280_4922c0b2d11645ecb6964b5000ff7e59_png);

    lv_obj_add_style(GUI_Label__screen__EcoBarter, &GUI_Style__class_rcPsn8044NoMFo__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__screen__image, &upload_vector_120x120_42befb7f73aa4429aa80d754d7a5b864_png);

    lv_image_set_src(GUI_Image__screen__image_1, &upload_vector_110x110_20b0dcae8a69495aa6b0b3ebf8d88194_png);

    lv_obj_add_style(GUI_Label__screen__Niara, &GUI_Style__class_EXUmGNppUP3BAQ__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__screen__Vector__image_7w7SSHR9F4I0RZ,
                     &upload_vector_25x30_17e13a5f03d94996aeba296d9b94634a_png);

    lv_image_set_src(GUI_Image__screen__Vector__image_N42RY2wWj1ffOR,
                     &upload_vector_25x30_17e13a5f03d94996aeba296d9b94634a_png);

    lv_image_set_src(GUI_Image__screen__Vector__image_U0R0CdtSbx5EuB,
                     &upload_vector_25x30_17e13a5f03d94996aeba296d9b94634a_png);

    lv_image_set_src(GUI_Image__screen__Vector__image_vc7Mw8cBAbXYEN,
                     &upload_vector_80x80_7e603fce42ac472dae47fb7775f1ab4e_png);

    lv_obj_add_style(GUI_Label__screen__label_1, &GUI_Style__class_shG784n8VR85Bb__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen__label_2, &GUI_Style__class_cLln4Xf1crR93J__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen__label_18, &GUI_Style__class_ZSqRtXRcQ6r3Cu__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Button__screen__button, &GUI_Style__class_OLOGMcceJZC1td__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen__label_43, &GUI_Style__class_NFze9IzZDK1TgB__, LV_PART_MAIN | LV_STATE_DEFAULT);

}


