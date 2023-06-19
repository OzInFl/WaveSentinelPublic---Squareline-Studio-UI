// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.4
// Project name: Tempest2

#include "../ui.h"

void ui_scrMain_screen_init(void)
{
    ui_scrMain = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_scrMain, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_scrMain, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_scrMain, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_scrMain, &ui_img_mainbackground_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnMainConfig = lv_btn_create(ui_scrMain);
    lv_obj_set_width(ui_btnMainConfig, 92);
    lv_obj_set_height(ui_btnMainConfig, 62);
    lv_obj_set_x(ui_btnMainConfig, -105);
    lv_obj_set_y(ui_btnMainConfig, 37);
    lv_obj_set_align(ui_btnMainConfig, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnMainConfig, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnMainConfig, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnMainConfig, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnMainConfig, lv_color_hex(0x454545), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnMainConfig, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_btnMainConfig, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_btnMainConfig, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btn315Test = lv_btn_create(ui_scrMain);
    lv_obj_set_width(ui_btn315Test, 92);
    lv_obj_set_height(ui_btn315Test, 62);
    lv_obj_set_x(ui_btn315Test, 0);
    lv_obj_set_y(ui_btn315Test, 37);
    lv_obj_set_align(ui_btn315Test, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btn315Test, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btn315Test, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btn315Test, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btn315Test, lv_color_hex(0x454545), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btn315Test, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_btn315Test, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_btn315Test, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnMainPreset = lv_btn_create(ui_scrMain);
    lv_obj_set_width(ui_btnMainPreset, 92);
    lv_obj_set_height(ui_btnMainPreset, 62);
    lv_obj_set_x(ui_btnMainPreset, 105);
    lv_obj_set_y(ui_btnMainPreset, 116);
    lv_obj_set_align(ui_btnMainPreset, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnMainPreset, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnMainPreset, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnMainPreset, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnMainPreset, lv_color_hex(0x454545), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnMainPreset, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_btnMainPreset, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_btnMainPreset, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_btnMainPreset, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnMain9 = lv_btn_create(ui_scrMain);
    lv_obj_set_width(ui_btnMain9, 92);
    lv_obj_set_height(ui_btnMain9, 62);
    lv_obj_set_x(ui_btnMain9, 105);
    lv_obj_set_y(ui_btnMain9, 197);
    lv_obj_set_align(ui_btnMain9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnMain9, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnMain9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnMain9, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnMain9, lv_color_hex(0x454545), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnMain9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_btnMain9, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_btnMain9, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnMainPresetTX = lv_btn_create(ui_scrMain);
    lv_obj_set_width(ui_btnMainPresetTX, 92);
    lv_obj_set_height(ui_btnMainPresetTX, 62);
    lv_obj_set_x(ui_btnMainPresetTX, 105);
    lv_obj_set_y(ui_btnMainPresetTX, 37);
    lv_obj_set_align(ui_btnMainPresetTX, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnMainPresetTX, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnMainPresetTX, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnMainPresetTX, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnMainPresetTX, lv_color_hex(0x454545), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnMainPresetTX, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_btnMainPresetTX, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_btnMainPresetTX, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_btnMainPresetTX, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnMainTesla = lv_btn_create(ui_scrMain);
    lv_obj_set_width(ui_btnMainTesla, 92);
    lv_obj_set_height(ui_btnMainTesla, 62);
    lv_obj_set_x(ui_btnMainTesla, -105);
    lv_obj_set_y(ui_btnMainTesla, 197);
    lv_obj_set_align(ui_btnMainTesla, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnMainTesla, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnMainTesla, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnMainTesla, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnMainTesla, lv_color_hex(0x454545), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnMainTesla, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_btnMainTesla, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_btnMainTesla, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_btnMainTesla, &ui_img_teslabtnicon_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnMainSettings = lv_btn_create(ui_scrMain);
    lv_obj_set_width(ui_btnMainSettings, 92);
    lv_obj_set_height(ui_btnMainSettings, 62);
    lv_obj_set_x(ui_btnMainSettings, 0);
    lv_obj_set_y(ui_btnMainSettings, 197);
    lv_obj_set_align(ui_btnMainSettings, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnMainSettings, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnMainSettings, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnMainSettings, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnMainSettings, lv_color_hex(0x454545), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnMainSettings, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_btnMainSettings, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_btnMainSettings, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_btnMainSettings, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnMainWifi = lv_btn_create(ui_scrMain);
    lv_obj_set_width(ui_btnMainWifi, 92);
    lv_obj_set_height(ui_btnMainWifi, 62);
    lv_obj_set_x(ui_btnMainWifi, -105);
    lv_obj_set_y(ui_btnMainWifi, 117);
    lv_obj_set_align(ui_btnMainWifi, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnMainWifi, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnMainWifi, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnMainWifi, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnMainWifi, lv_color_hex(0x454545), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnMainWifi, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_btnMainWifi, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_btnMainWifi, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnMainProtAna = lv_btn_create(ui_scrMain);
    lv_obj_set_width(ui_btnMainProtAna, 92);
    lv_obj_set_height(ui_btnMainProtAna, 62);
    lv_obj_set_x(ui_btnMainProtAna, 0);
    lv_obj_set_y(ui_btnMainProtAna, 117);
    lv_obj_set_align(ui_btnMainProtAna, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnMainProtAna, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnMainProtAna, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnMainProtAna, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnMainProtAna, lv_color_hex(0x454545), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnMainProtAna, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_btnMainProtAna, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_btnMainProtAna, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_btnMainProtAna, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblMainConfig = lv_label_create(ui_scrMain);
    lv_obj_set_width(ui_lblMainConfig, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblMainConfig, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblMainConfig, -107);
    lv_obj_set_y(ui_lblMainConfig, 36);
    lv_obj_set_align(ui_lblMainConfig, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblMainConfig, "TX\nCONFIG");
    lv_obj_set_style_text_color(ui_lblMainConfig, lv_color_hex(0xFF9100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblMainConfig, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblMainConfig, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblMainConfig, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_lblMainConfig, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_lblMainConfig, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblMain315Test = lv_label_create(ui_scrMain);
    lv_obj_set_width(ui_lblMain315Test, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblMain315Test, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblMain315Test, -2);
    lv_obj_set_y(ui_lblMain315Test, 36);
    lv_obj_set_align(ui_lblMain315Test, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblMain315Test, "RF\nREPLAY");
    lv_obj_set_style_text_color(ui_lblMain315Test, lv_color_hex(0xFF9100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblMain315Test, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblMain315Test, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblMain315Test, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_lblMain315Test, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblMainProtAna = lv_label_create(ui_scrMain);
    lv_obj_set_width(ui_lblMainProtAna, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblMainProtAna, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblMainProtAna, 106);
    lv_obj_set_y(ui_lblMainProtAna, 192);
    lv_obj_set_align(ui_lblMainProtAna, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblMainProtAna, "");
    lv_obj_set_style_text_color(ui_lblMainProtAna, lv_color_hex(0xFF9100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblMainProtAna, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblMainProtAna, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblMainProtAna, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblMainPresetTx = lv_label_create(ui_scrMain);
    lv_obj_set_width(ui_lblMainPresetTx, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblMainPresetTx, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblMainPresetTx, 105);
    lv_obj_set_y(ui_lblMainPresetTx, 36);
    lv_obj_set_align(ui_lblMainPresetTx, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblMainPresetTx, "P1");
    lv_obj_set_style_text_color(ui_lblMainPresetTx, lv_color_hex(0xFF9100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblMainPresetTx, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblMainPresetTx, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblMainPresetTx, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblMainStatus = lv_label_create(ui_scrMain);
    lv_obj_set_width(ui_lblMainStatus, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblMainStatus, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblMainStatus, -1);
    lv_obj_set_y(ui_lblMainStatus, -180);
    lv_obj_set_align(ui_lblMainStatus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblMainStatus, "");
    lv_obj_set_style_text_color(ui_lblMainStatus, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblMainStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblMainStatus, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblMainSettings = lv_label_create(ui_scrMain);
    lv_obj_set_width(ui_lblMainSettings, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblMainSettings, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblMainSettings, -2);
    lv_obj_set_y(ui_lblMainSettings, 194);
    lv_obj_set_align(ui_lblMainSettings, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblMainSettings, "SYS");
    lv_obj_set_style_text_color(ui_lblMainSettings, lv_color_hex(0xFF9100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblMainSettings, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblMainSettings, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblMainSettings, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblMainMenu = lv_label_create(ui_scrMain);
    lv_obj_set_width(ui_lblMainMenu, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblMainMenu, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblMainMenu, 0);
    lv_obj_set_y(ui_lblMainMenu, -140);
    lv_obj_set_align(ui_lblMainMenu, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblMainMenu, "MAIN MENU");
    lv_label_set_recolor(ui_lblMainMenu, "true");
    lv_obj_set_style_text_color(ui_lblMainMenu, lv_color_hex(0xFF9100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblMainMenu, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblMainMenu, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblMainMenu, &ui_font_Verdana24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image2 = lv_img_create(ui_scrMain);
    lv_img_set_src(ui_Image2, &ui_img_wifilogo_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 60
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 42
    lv_obj_set_x(ui_Image2, -106);
    lv_obj_set_y(ui_Image2, 116);
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image1 = lv_img_create(ui_scrMain);
    lv_img_set_src(ui_Image1, &ui_img_analyzericon_png);
    lv_obj_set_width(ui_Image1, 70);
    lv_obj_set_height(ui_Image1, 66);
    lv_obj_set_x(ui_Image1, -5);
    lv_obj_set_y(ui_Image1, 109);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image1, 225);

    ui_Image3 = lv_img_create(ui_scrMain);
    lv_img_set_src(ui_Image3, &ui_img_subrecordplay_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);   /// 60
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);    /// 60
    lv_obj_set_x(ui_Image3, 110);
    lv_obj_set_y(ui_Image3, 197);
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image3, 200);

    ui_Image4 = lv_img_create(ui_scrMain);
    lv_img_set_src(ui_Image4, &ui_img_flippericon_png);
    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);   /// 50
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_Image4, 106);
    lv_obj_set_y(ui_Image4, 116);
    lv_obj_set_align(ui_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblProtAnalyzerTitle2 = lv_label_create(ui_scrMain);
    lv_obj_set_width(ui_lblProtAnalyzerTitle2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblProtAnalyzerTitle2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblProtAnalyzerTitle2, 7);
    lv_obj_set_y(ui_lblProtAnalyzerTitle2, -220);
    lv_obj_set_align(ui_lblProtAnalyzerTitle2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblProtAnalyzerTitle2, "CLIPPER 1");
    lv_obj_set_style_text_color(ui_lblProtAnalyzerTitle2, lv_color_hex(0xFF9100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblProtAnalyzerTitle2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblProtAnalyzerTitle2, &ui_font_Verdana18, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_btnMainConfig, ui_event_btnMainConfig, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btn315Test, ui_event_btn315Test, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnMainPreset, ui_event_btnMainPreset, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnMain9, ui_event_btnMain9, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnMainPresetTX, ui_event_btnMainPresetTX, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnMainTesla, ui_event_btnMainTesla, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnMainSettings, ui_event_btnMainSettings, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnMainWifi, ui_event_btnMainWifi, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnMainProtAna, ui_event_btnMainProtAna, LV_EVENT_ALL, NULL);

}
