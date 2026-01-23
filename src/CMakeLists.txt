SET( SOURCES
    Behaviour/GUI_Animations.c
    Behaviour/GUI_Events.c
    Content/screens/screen.c
    Content/screens/screen_1.c
    Content/screens/screen_2.c
    GUI.c
    GUI_Variables.c
    assets/images/upload_vector_100x50_287c335e4fd947c8b62a60dbfe9a07a1_png.c
    assets/images/upload_vector_110x110_20b0dcae8a69495aa6b0b3ebf8d88194_png.c
    assets/images/upload_vector_120x120_42befb7f73aa4429aa80d754d7a5b864_png.c
    assets/images/upload_vector_24x25_90319e29db3c4a63970161315d1a1ecb_png.c
    assets/images/upload_vector_250x60_6d44a08093064a28909ca60ec19b42df_png.c
    assets/images/upload_vector_25x30_17e13a5f03d94996aeba296d9b94634a_png.c
    assets/images/upload_vector_280x280_4922c0b2d11645ecb6964b5000ff7e59_png.c
    assets/images/upload_vector_30x15_adaac31bac844762adf5da297da2223a_png.c
    assets/images/upload_vector_44x30_7b32e144298344d4a7e274cb468fbedd_png.c
    assets/images/upload_vector_50x30_a63f5fdb173a49b99b771acabba63927_png.c
    assets/images/upload_vector_56x20_71b2ced0f46c4eb9b37578de89e4756d_png.c
    assets/images/upload_vector_56x90_5c52ae5171e846908af8ce8513b83bf4_png.c
    assets/images/upload_vector_60x20_eea473bc133e47ed9f502d07275c056a_png.c
    assets/images/upload_vector_60x80_5c0471f6a5f94344818414c1aad5a69d_png.c
    assets/images/upload_vector_800x480_efe122e387d3452b82c309071d35b967_png.c
    assets/images/upload_vector_80x80_7e603fce42ac472dae47fb7775f1ab4e_png.c
    assets/styles/GUI_GlobalStyles.c
    fonts/inter64_1.c
    fonts/inter_11_700_1.c
    fonts/inter_26_700_1.c
    fonts/inter_36_700_1.c
    fonts/inter_48_1.c
    fonts/inter_9_700_1.c
    ui_helpers.c
)

add_library( GUI ${SOURCES} )

