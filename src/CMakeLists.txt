SET( SOURCES
    Behaviour/GUI_Animations.c
    Behaviour/GUI_Events.c
    Content/screens/screen.c
    Content/screens/screen_1.c
    Content/screens/screen_2.c
    GUI.c
    GUI_Variables.c
    assets/images/upload_download__9__142x142_83b0827feb384e1889b95974462db75c_png.c
    assets/images/upload_frame_10_800x480_deae9b4c98214466b129acd5ae895ceb_png.c
    assets/images/upload_image_142x142_94f6567eb02445419fdec27f34a3224b_png.c
    assets/images/upload_vector_49_14_8220x8000_8b0ff4dc0c6947be903accae0d5fc817_png.c
    assets/images/upload_vector_49_15_120x4_10a324c47e6b455eae3a1c904328f4a3_png.c
    assets/styles/GUI_GlobalStyles.c
    fonts/inter_16_1.c
    fonts/inter_22_1.c
    fonts/inter_30_700_1.c
    fonts/inter_36_700_1.c
    fonts/inter_48_1.c
    fonts/inter_60_700_1.c
    ui_helpers.c
)

add_library( GUI ${SOURCES} )

