#include "../GUI.h"

#ifdef GUI_EXTERNAL_CUSTOM_CALLBACK_FUNCTION_FILE
    #include GUI_EXTERNAL_CUSTOM_CALLBACK_FUNCTION_FILE
#endif


void GUI_event__Label__screen__label_18__Clicked(lv_event_t * event)
{
}


void GUI_event__Button__screen__button__Clicked(lv_event_t * event)
{
    _ui_screen_change(&GUI_Screen__screen_1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &GUI_initScreen__screen_1);   //Change_Screen
}


void GUI_event__Button__screen_1__button_1__Released(lv_event_t * event)
{
    _ui_screen_change(&GUI_Screen__screen_2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &GUI_initScreen__screen_2);   //Change_Screen
}


