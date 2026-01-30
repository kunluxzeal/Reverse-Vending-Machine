#include "../GUI.h"
#include "GUI_events_wrapper.h"



#ifdef GUI_EXTERNAL_CUSTOM_CALLBACK_FUNCTION_FILE
    #include GUI_EXTERNAL_CUSTOM_CALLBACK_FUNCTION_FILE
#endif


void GUI_event__Button__screen__button_1__Clicked(lv_event_t * event)
{
    sendStartCommand();
    _ui_screen_change(&GUI_Screen__screen_1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &GUI_initScreen__screen_1);   //Change_Screen
}


void GUI_event__Button__screen_1__button_3__Released(lv_event_t * event)
{       // Start new session - ESP32 resets all counters
   

     // Option 1: If this button means CONTINUE (add another batch)
    // Uncomment this:
    // sendContinueCommand();
    // Display shows: "Batch saved. Insert next batch."
    // User stays on screen_1 to add more items
    
    // Option 2: If this button means DONE (finish session)
    // Uncomment this:
     sendDoneCommand();
    // sendStopCommand();

    

    _ui_screen_change(&GUI_Screen__screen_2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &GUI_initScreen__screen_2);   //Change_Screen

    lv_task_handler();  // Process pending UI updates

          // Wait for screen to load
        delayMs(600);
     // Generate QR code with session data
    generateSessionQR();
}




void GUI_event__Label__screen_1__label_44__Clicked(lv_event_t * event)
{
}


void GUI_event__Button__screen_1__button_2__Clicked(lv_event_t * event)
{
    
   
}
    




