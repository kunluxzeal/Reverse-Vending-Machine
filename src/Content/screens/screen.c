#include "../../GUI.h"



void GUI_initScreen__screen()
{
    GUI_Screen__screen = lv_obj_create(NULL);
    lv_obj_remove_flag(GUI_Screen__screen, LV_OBJ_FLAG_SCROLLABLE);
    GUI_Image__screen__Frame_10_1 = lv_image_create(GUI_Screen__screen);
    lv_obj_remove_flag(GUI_Image__screen__Frame_10_1, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen__Frame_10_1, LV_ALIGN_CENTER);
    lv_obj_set_size(GUI_Image__screen__Frame_10_1, 800, 480);

    GUI_Label__screen__EcoBarter_2 = lv_label_create(GUI_Screen__screen);
    lv_obj_remove_flag(GUI_Label__screen__EcoBarter_2, LV_OBJ_FLAG_SCROLLABLE);
    lv_label_set_long_mode(GUI_Label__screen__EcoBarter_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen__EcoBarter_2, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen__EcoBarter_2, -10, -191);
    lv_obj_set_size(GUI_Label__screen__EcoBarter_2, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Image__screen__Vector_1 = lv_image_create(GUI_Screen__screen);
    lv_obj_remove_flag(GUI_Image__screen__Vector_1, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen__Vector_1, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen__Vector_1, -19, -162);
    lv_obj_set_size(GUI_Image__screen__Vector_1, 120, 4);

    GUI_Panel__screen__Ellipse_1 = lv_obj_create(GUI_Screen__screen);
    lv_obj_remove_flag(GUI_Panel__screen__Ellipse_1, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Panel__screen__Ellipse_1, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Panel__screen__Ellipse_1, -19, -70);
    lv_obj_set_size(GUI_Panel__screen__Ellipse_1, 144, 144);

    GUI_Image__screen__Vector_4 = lv_image_create(GUI_Screen__screen);
    lv_obj_remove_flag(GUI_Image__screen__Vector_4, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_align(GUI_Image__screen__Vector_4, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Image__screen__Vector_4, -21, -68);
    lv_obj_set_size(GUI_Image__screen__Vector_4, 82, 80);

    GUI_Label__screen__label_7 = lv_label_create(GUI_Screen__screen);
    lv_label_set_long_mode(GUI_Label__screen__label_7, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen__label_7, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen__label_7, -11, 36);
    lv_obj_set_size(GUI_Label__screen__label_7, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen__label_8 = lv_label_create(GUI_Screen__screen);
    lv_label_set_long_mode(GUI_Label__screen__label_8, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen__label_8, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen__label_8, -6, 83);
    lv_obj_set_size(GUI_Label__screen__label_8, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Button__screen__button_1 = lv_button_create(GUI_Screen__screen);
    lv_obj_set_align(GUI_Button__screen__button_1, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Button__screen__button_1, -15, 152);
    lv_obj_set_size(GUI_Button__screen__button_1, 143, 59);
    lv_obj_add_event_cb(GUI_Button__screen__button_1, GUI_event__Button__screen__button_1__Clicked, LV_EVENT_CLICKED, NULL);

    GUI_Label__screen__label_9 = lv_label_create(GUI_Screen__screen);
    lv_label_set_long_mode(GUI_Label__screen__label_9, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen__label_9, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen__label_9, -14, 153);
    lv_obj_set_size(GUI_Label__screen__label_9, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    GUI_Label__screen__label_10 = lv_label_create(GUI_Screen__screen);
    lv_label_set_long_mode(GUI_Label__screen__label_10, LV_LABEL_LONG_WRAP);
    lv_obj_set_align(GUI_Label__screen__label_10, LV_ALIGN_CENTER);
    lv_obj_set_pos(GUI_Label__screen__label_10, -16, 213);
    lv_obj_set_size(GUI_Label__screen__label_10, LV_SIZE_CONTENT, LV_SIZE_CONTENT);


    GUI_initScreenStyles__screen();
    GUI_initScreenTexts__screen();
}


void GUI_initScreenTexts__screen()
{
    lv_label_set_text(GUI_Label__screen__EcoBarter_2, "EcoBarter");
    lv_label_set_text(GUI_Label__screen__label_7, "Recycle to Earn cash");
    lv_label_set_text(GUI_Label__screen__label_8, "Turn your PET bottles and cans into instant reward");
    lv_label_set_text(GUI_Label__screen__label_9, "START");
    lv_label_set_text(GUI_Label__screen__label_10, "Insert bottles and cans to begin");
}


void GUI_initScreenStyles__screen()
{
    lv_image_set_src(GUI_Image__screen__Frame_10_1, &upload_frame_10_800x480_deae9b4c98214466b129acd5ae895ceb_png);

    lv_obj_add_style(GUI_Image__screen__Frame_10_1, &GUI_Style__class_WPZpNDHn0lqSf0__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen__EcoBarter_2, &GUI_Style__class_0QwDsznTVpqhxU__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__screen__Vector_1, &upload_vector_49_15_120x4_10a324c47e6b455eae3a1c904328f4a3_png);

    lv_obj_add_style(GUI_Panel__screen__Ellipse_1, &GUI_Style__class_DulD2FLtwrccBD__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_image_set_src(GUI_Image__screen__Vector_4, &upload_vector_49_14_8220x8000_8b0ff4dc0c6947be903accae0d5fc817_png);

    lv_obj_add_style(GUI_Label__screen__label_7, &GUI_Style__class_GMXk5IrFD6FhPz__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen__label_8, &GUI_Style__class_038PfWRmwBRvrS__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Button__screen__button_1, &GUI_Style__class_qceAHAFVPr1iec__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen__label_9, &GUI_Style__class_qGEmkXlz0DXj3S__, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_style(GUI_Label__screen__label_10, &GUI_Style__class_hENnBAbfXYAPjn__, LV_PART_MAIN | LV_STATE_DEFAULT);

}


