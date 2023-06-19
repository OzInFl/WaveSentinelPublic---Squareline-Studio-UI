// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.4
// Project name: Tempest2

#include "../ui.h"

void ui_scrProtAna_screen_init(void)
{
    ui_scrProtAna = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_scrProtAna, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_scrProtAna, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_scrProtAna, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_scrProtAna, &ui_img_blankpgbkgnd_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblProtAnalyzerTitle = lv_label_create(ui_scrProtAna);
    lv_obj_set_width(ui_lblProtAnalyzerTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblProtAnalyzerTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblProtAnalyzerTitle, 7);
    lv_obj_set_y(ui_lblProtAnalyzerTitle, -220);
    lv_obj_set_align(ui_lblProtAnalyzerTitle, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblProtAnalyzerTitle, "PROTOCOL ANALYZER");
    lv_obj_set_style_text_color(ui_lblProtAnalyzerTitle, lv_color_hex(0xFF9100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblProtAnalyzerTitle, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblProtAnalyzerTitle, &ui_font_Verdana18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtProtAnaResults = lv_textarea_create(ui_scrProtAna);
    lv_obj_set_width(ui_txtProtAnaResults, 306);
    lv_obj_set_height(ui_txtProtAnaResults, 131);
    lv_obj_set_x(ui_txtProtAnaResults, -1);
    lv_obj_set_y(ui_txtProtAnaResults, 49);
    lv_obj_set_align(ui_txtProtAnaResults, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_txtProtAnaResults, "Raw Signal Info...");
    lv_obj_clear_flag(ui_txtProtAnaResults, LV_OBJ_FLAG_CLICK_FOCUSABLE);      /// Flags
    lv_obj_set_style_text_color(ui_txtProtAnaResults, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_txtProtAnaResults, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_txtProtAnaResults, &ui_font_Verdana14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_txtProtAnaResults, &ui_img_blankpgbkgnd_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnProtAnaCncl = lv_btn_create(ui_scrProtAna);
    lv_obj_set_width(ui_btnProtAnaCncl, 110);
    lv_obj_set_height(ui_btnProtAnaCncl, 50);
    lv_obj_set_x(ui_btnProtAnaCncl, 70);
    lv_obj_set_y(ui_btnProtAnaCncl, 195);
    lv_obj_set_align(ui_btnProtAnaCncl, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnProtAnaCncl, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnProtAnaCncl, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnProtAnaCncl, lv_color_hex(0xFFF700), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnProtAnaCncl, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnProtAnaClear = lv_btn_create(ui_scrProtAna);
    lv_obj_set_width(ui_btnProtAnaClear, 110);
    lv_obj_set_height(ui_btnProtAnaClear, 50);
    lv_obj_set_x(ui_btnProtAnaClear, -70);
    lv_obj_set_y(ui_btnProtAnaClear, 195);
    lv_obj_set_align(ui_btnProtAnaClear, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnProtAnaClear, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnProtAnaClear, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnProtAnaClear, lv_color_hex(0xFFF700), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnProtAnaClear, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblProtAnaCncl = lv_label_create(ui_scrProtAna);
    lv_obj_set_width(ui_lblProtAnaCncl, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblProtAnaCncl, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblProtAnaCncl, 71);
    lv_obj_set_y(ui_lblProtAnaCncl, 195);
    lv_obj_set_align(ui_lblProtAnaCncl, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblProtAnaCncl, "BACK");
    lv_obj_set_style_text_font(ui_lblProtAnaCncl, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_swtProtAnaRxEn = lv_switch_create(ui_scrProtAna);
    lv_obj_set_width(ui_swtProtAnaRxEn, 61);
    lv_obj_set_height(ui_swtProtAnaRxEn, 26);
    lv_obj_set_x(ui_swtProtAnaRxEn, 43);
    lv_obj_set_y(ui_swtProtAnaRxEn, 143);
    lv_obj_set_align(ui_swtProtAnaRxEn, LV_ALIGN_CENTER);

    ui_lblProtAnaRXEn = lv_label_create(ui_scrProtAna);
    lv_obj_set_width(ui_lblProtAnaRXEn, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblProtAnaRXEn, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblProtAnaRXEn, 114);
    lv_obj_set_y(ui_lblProtAnaRXEn, 142);
    lv_obj_set_align(ui_lblProtAnaRXEn, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblProtAnaRXEn, "RX ENABLE");
    lv_obj_set_style_text_color(ui_lblProtAnaRXEn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblProtAnaRXEn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblProtAnaRXEn, &ui_font_Verdana11, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblProtAnaClear = lv_label_create(ui_scrProtAna);
    lv_obj_set_width(ui_lblProtAnaClear, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblProtAnaClear, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblProtAnaClear, -71);
    lv_obj_set_y(ui_lblProtAnaClear, 195);
    lv_obj_set_align(ui_lblProtAnaClear, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblProtAnaClear, "CLEAR");
    lv_obj_set_style_text_font(ui_lblProtAnaClear, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblMainFreq = lv_label_create(ui_scrProtAna);
    lv_obj_set_width(ui_lblMainFreq, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblMainFreq, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblMainFreq, -1);
    lv_obj_set_y(ui_lblMainFreq, -193);
    lv_obj_set_align(ui_lblMainFreq, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblMainFreq, "FREQUENCY (MHz)");
    lv_obj_set_style_text_color(ui_lblMainFreq, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblMainFreq, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblMainFreq, &ui_font_Verdana14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtMainFreq = lv_textarea_create(ui_scrProtAna);
    lv_obj_set_width(ui_txtMainFreq, 173);
    lv_obj_set_height(ui_txtMainFreq, LV_SIZE_CONTENT);    /// 49
    lv_obj_set_x(ui_txtMainFreq, 0);
    lv_obj_set_y(ui_txtMainFreq, -164);
    lv_obj_set_align(ui_txtMainFreq, LV_ALIGN_CENTER);
    if("1234567890." == "") lv_textarea_set_accepted_chars(ui_txtMainFreq, NULL);
    else lv_textarea_set_accepted_chars(ui_txtMainFreq, "1234567890.");
    lv_textarea_set_max_length(ui_txtMainFreq, 6);
    lv_textarea_set_text(ui_txtMainFreq, "433.92");
    lv_textarea_set_one_line(ui_txtMainFreq, true);
    lv_obj_set_style_text_color(ui_txtMainFreq, lv_color_hex(0x00FFEB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_txtMainFreq, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_txtMainFreq, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_txtMainFreq, &ui_font_LCD20at8BPP, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_txtMainFreq, lv_color_hex(0x525052), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_txtMainFreq, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblProtAnaReceived = lv_label_create(ui_scrProtAna);
    lv_obj_set_width(ui_lblProtAnaReceived, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblProtAnaReceived, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblProtAnaReceived, -91);
    lv_obj_set_y(ui_lblProtAnaReceived, -132);
    lv_obj_set_align(ui_lblProtAnaReceived, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblProtAnaReceived, "RECEIVED");
    lv_obj_set_style_text_color(ui_lblProtAnaReceived, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblProtAnaReceived, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblProtAnaReceived, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblProtAnaReceived, &ui_font_Verdana11, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblProtAnaBitLength = lv_label_create(ui_scrProtAna);
    lv_obj_set_width(ui_lblProtAnaBitLength, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblProtAnaBitLength, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblProtAnaBitLength, 20);
    lv_obj_set_y(ui_lblProtAnaBitLength, -132);
    lv_obj_set_align(ui_lblProtAnaBitLength, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblProtAnaBitLength, "BIT LEN");
    lv_obj_set_style_text_color(ui_lblProtAnaBitLength, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblProtAnaBitLength, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblProtAnaBitLength, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblProtAnaBitLength, &ui_font_Verdana11, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtProtAnaReceived = lv_textarea_create(ui_scrProtAna);
    lv_obj_set_width(ui_txtProtAnaReceived, 120);
    lv_obj_set_height(ui_txtProtAnaReceived, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_txtProtAnaReceived, -93);
    lv_obj_set_y(ui_txtProtAnaReceived, -109);
    lv_obj_set_align(ui_txtProtAnaReceived, LV_ALIGN_CENTER);
    lv_textarea_set_text(ui_txtProtAnaReceived, "-");
    lv_obj_clear_flag(ui_txtProtAnaReceived, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_txtProtAnaReceived, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_txtProtAnaReceived, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_txtProtAnaReceived, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_txtProtAnaReceived, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_txtProtAnaReceived, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_txtProtAnaReceived, &ui_font_Verdana14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_txtProtAnaReceived, lv_color_hex(0x525052), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_txtProtAnaReceived, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtProtAnaBitLength = lv_textarea_create(ui_scrProtAna);
    lv_obj_set_width(ui_txtProtAnaBitLength, 52);
    lv_obj_set_height(ui_txtProtAnaBitLength, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_txtProtAnaBitLength, 21);
    lv_obj_set_y(ui_txtProtAnaBitLength, -110);
    lv_obj_set_align(ui_txtProtAnaBitLength, LV_ALIGN_CENTER);
    lv_textarea_set_text(ui_txtProtAnaBitLength, "-");
    lv_obj_clear_flag(ui_txtProtAnaBitLength, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_txtProtAnaBitLength, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_txtProtAnaBitLength, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_txtProtAnaBitLength, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_txtProtAnaBitLength, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_txtProtAnaBitLength, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_txtProtAnaBitLength, &ui_font_Verdana14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_txtProtAnaBitLength, lv_color_hex(0x525052), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_txtProtAnaBitLength, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblProtAnaProtocol = lv_label_create(ui_scrProtAna);
    lv_obj_set_width(ui_lblProtAnaProtocol, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblProtAnaProtocol, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblProtAnaProtocol, 104);
    lv_obj_set_y(ui_lblProtAnaProtocol, -132);
    lv_obj_set_align(ui_lblProtAnaProtocol, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblProtAnaProtocol, "PROTO");
    lv_obj_set_style_text_color(ui_lblProtAnaProtocol, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblProtAnaProtocol, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblProtAnaProtocol, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblProtAnaProtocol, &ui_font_Verdana11, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtProtAnaProtocol = lv_textarea_create(ui_scrProtAna);
    lv_obj_set_width(ui_txtProtAnaProtocol, 60);
    lv_obj_set_height(ui_txtProtAnaProtocol, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_txtProtAnaProtocol, 105);
    lv_obj_set_y(ui_txtProtAnaProtocol, -110);
    lv_obj_set_align(ui_txtProtAnaProtocol, LV_ALIGN_CENTER);
    lv_textarea_set_text(ui_txtProtAnaProtocol, "-");
    lv_obj_clear_flag(ui_txtProtAnaProtocol, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_txtProtAnaProtocol, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_txtProtAnaProtocol, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_txtProtAnaProtocol, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_txtProtAnaProtocol, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_txtProtAnaProtocol, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_txtProtAnaProtocol, &ui_font_Verdana14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_txtProtAnaProtocol, lv_color_hex(0x525052), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_txtProtAnaProtocol, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblProtAnaDBPTD = lv_label_create(ui_scrProtAna);
    lv_obj_set_width(ui_lblProtAnaDBPTD, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblProtAnaDBPTD, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblProtAnaDBPTD, -103);
    lv_obj_set_y(ui_lblProtAnaDBPTD, -75);
    lv_obj_set_align(ui_lblProtAnaDBPTD, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblProtAnaDBPTD, "DATA BITS of\nPULSE TRN DUR.");
    lv_obj_set_style_text_color(ui_lblProtAnaDBPTD, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblProtAnaDBPTD, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblProtAnaDBPTD, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblProtAnaDBPTD, &ui_font_Verdana11, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtProtAnaDBPTD = lv_textarea_create(ui_scrProtAna);
    lv_obj_set_width(ui_txtProtAnaDBPTD, 94);
    lv_obj_set_height(ui_txtProtAnaDBPTD, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_txtProtAnaDBPTD, -104);
    lv_obj_set_y(ui_txtProtAnaDBPTD, -48);
    lv_obj_set_align(ui_txtProtAnaDBPTD, LV_ALIGN_CENTER);
    lv_textarea_set_text(ui_txtProtAnaDBPTD, "-");
    lv_obj_clear_flag(ui_txtProtAnaDBPTD, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_txtProtAnaDBPTD, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_txtProtAnaDBPTD, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_txtProtAnaDBPTD, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_txtProtAnaDBPTD, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_txtProtAnaDBPTD, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_txtProtAnaDBPTD, &ui_font_Verdana14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_txtProtAnaDBPTD, lv_color_hex(0x525052), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_txtProtAnaDBPTD, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblProtAnaPropProt = lv_label_create(ui_scrProtAna);
    lv_obj_set_width(ui_lblProtAnaPropProt, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblProtAnaPropProt, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblProtAnaPropProt, 57);
    lv_obj_set_y(ui_lblProtAnaPropProt, -74);
    lv_obj_set_align(ui_lblProtAnaPropProt, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblProtAnaPropProt, "PROPOSED\n PROTOCOL");
    lv_obj_set_style_text_color(ui_lblProtAnaPropProt, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblProtAnaPropProt, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblProtAnaPropProt, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblProtAnaPropProt, &ui_font_Verdana11, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtProtAnaProtAnaPropProt = lv_textarea_create(ui_scrProtAna);
    lv_obj_set_width(ui_txtProtAnaProtAnaPropProt, 158);
    lv_obj_set_height(ui_txtProtAnaProtAnaPropProt, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_txtProtAnaProtAnaPropProt, 58);
    lv_obj_set_y(ui_txtProtAnaProtAnaPropProt, -48);
    lv_obj_set_align(ui_txtProtAnaProtAnaPropProt, LV_ALIGN_CENTER);
    lv_textarea_set_text(ui_txtProtAnaProtAnaPropProt, "-");
    lv_obj_clear_flag(ui_txtProtAnaProtAnaPropProt, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_txtProtAnaProtAnaPropProt, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_txtProtAnaProtAnaPropProt, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_txtProtAnaProtAnaPropProt, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_txtProtAnaProtAnaPropProt, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_txtProtAnaProtAnaPropProt, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_txtProtAnaProtAnaPropProt, &ui_font_Verdana11, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_txtProtAnaProtAnaPropProt, lv_color_hex(0x525052), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_txtProtAnaProtAnaPropProt, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_btnProtAnaCncl, ui_event_btnProtAnaCncl, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnProtAnaClear, ui_event_btnProtAnaClear, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_swtProtAnaRxEn, ui_event_swtProtAnaRxEn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_txtMainFreq, ui_event_txtMainFreq, LV_EVENT_ALL, NULL);

}