// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Clipper1

#include "../ui.h"

void ui_scrSettings_screen_init(void)
{
    ui_scrSettings = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_scrSettings, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_scrSettings, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_scrSettings, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_scrSettings, &ui_img_blankpgbkgnd_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblSettingsTitle = lv_label_create(ui_scrSettings);
    lv_obj_set_width(ui_lblSettingsTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSettingsTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSettingsTitle, 0);
    lv_obj_set_y(ui_lblSettingsTitle, -220);
    lv_obj_set_align(ui_lblSettingsTitle, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSettingsTitle, "SETTINGS");
    lv_obj_set_style_text_color(ui_lblSettingsTitle, lv_color_hex(0xFF9100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblSettingsTitle, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblSettingsTitle, &ui_font_Verdana18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnSettingsOTA = lv_btn_create(ui_scrSettings);
    lv_obj_set_width(ui_btnSettingsOTA, 100);
    lv_obj_set_height(ui_btnSettingsOTA, 41);
    lv_obj_set_x(ui_btnSettingsOTA, -100);
    lv_obj_set_y(ui_btnSettingsOTA, -140);
    lv_obj_set_align(ui_btnSettingsOTA, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnSettingsOTA, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnSettingsOTA, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblSettingsOTA = lv_label_create(ui_scrSettings);
    lv_obj_set_width(ui_lblSettingsOTA, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSettingsOTA, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSettingsOTA, -100);
    lv_obj_set_y(ui_lblSettingsOTA, -138);
    lv_obj_set_align(ui_lblSettingsOTA, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSettingsOTA, "OTA\nENABLE");
    lv_obj_set_style_text_align(ui_lblSettingsOTA, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblSettingsOTA, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblSettingsStatus = lv_label_create(ui_scrSettings);
    lv_obj_set_width(ui_lblSettingsStatus, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSettingsStatus, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSettingsStatus, 0);
    lv_obj_set_y(ui_lblSettingsStatus, -180);
    lv_obj_set_align(ui_lblSettingsStatus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSettingsStatus, "-Status-");
    lv_obj_set_style_text_color(ui_lblSettingsStatus, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblSettingsStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnSettingsBack = lv_btn_create(ui_scrSettings);
    lv_obj_set_width(ui_btnSettingsBack, 110);
    lv_obj_set_height(ui_btnSettingsBack, 50);
    lv_obj_set_x(ui_btnSettingsBack, -73);
    lv_obj_set_y(ui_btnSettingsBack, 196);
    lv_obj_set_align(ui_btnSettingsBack, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnSettingsBack, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnSettingsBack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnSettingsBack, lv_color_hex(0xFFF700), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnSettingsBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblSettingsBack = lv_label_create(ui_btnSettingsBack);
    lv_obj_set_width(ui_lblSettingsBack, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSettingsBack, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSettingsBack, -1);
    lv_obj_set_y(ui_lblSettingsBack, 1);
    lv_obj_set_align(ui_lblSettingsBack, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSettingsBack, "BACK");
    lv_obj_set_style_text_color(ui_lblSettingsBack, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblSettingsBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblSettingsBack, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblSettingsWifiIP = lv_label_create(ui_scrSettings);
    lv_obj_set_width(ui_lblSettingsWifiIP, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSettingsWifiIP, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSettingsWifiIP, -100);
    lv_obj_set_y(ui_lblSettingsWifiIP, -89);
    lv_obj_set_align(ui_lblSettingsWifiIP, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSettingsWifiIP, "IP ADDRESS");
    lv_obj_set_style_text_color(ui_lblSettingsWifiIP, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblSettingsWifiIP, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblSettingsWifiIP, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblSettingsIPAddr = lv_label_create(ui_scrSettings);
    lv_obj_set_width(ui_lblSettingsIPAddr, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSettingsIPAddr, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSettingsIPAddr, 37);
    lv_obj_set_y(ui_lblSettingsIPAddr, -90);
    lv_obj_set_align(ui_lblSettingsIPAddr, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSettingsIPAddr, "0.0.0.0");
    lv_obj_set_style_text_color(ui_lblSettingsIPAddr, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblSettingsIPAddr, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblSettingsIPAddr, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblSettingsIPAddr, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblSettingsInfo = lv_label_create(ui_scrSettings);
    lv_obj_set_width(ui_lblSettingsInfo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSettingsInfo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSettingsInfo, 49);
    lv_obj_set_y(ui_lblSettingsInfo, -138);
    lv_obj_set_align(ui_lblSettingsInfo, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSettingsInfo, "-Info-");
    lv_obj_set_style_text_color(ui_lblSettingsInfo, lv_color_hex(0xFF9100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblSettingsInfo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblSettingsInfo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblSettingsInfo, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_barProgress = lv_bar_create(ui_scrSettings);
    lv_obj_set_width(ui_barProgress, 202);
    lv_obj_set_height(ui_barProgress, 4);
    lv_obj_set_x(ui_barProgress, 0);
    lv_obj_set_y(ui_barProgress, -198);
    lv_obj_set_align(ui_barProgress, LV_ALIGN_CENTER);

    ui_swSettingsWifiMode = lv_switch_create(ui_scrSettings);
    lv_obj_set_width(ui_swSettingsWifiMode, 63);
    lv_obj_set_height(ui_swSettingsWifiMode, 25);
    lv_obj_set_x(ui_swSettingsWifiMode, 34);
    lv_obj_set_y(ui_swSettingsWifiMode, 20);
    lv_obj_set_align(ui_swSettingsWifiMode, LV_ALIGN_CENTER);

    ui_lblSettingsWifiSSID = lv_label_create(ui_scrSettings);
    lv_obj_set_width(ui_lblSettingsWifiSSID, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSettingsWifiSSID, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSettingsWifiSSID, -100);
    lv_obj_set_y(ui_lblSettingsWifiSSID, -55);
    lv_obj_set_align(ui_lblSettingsWifiSSID, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSettingsWifiSSID, "SSID");
    lv_obj_set_style_text_color(ui_lblSettingsWifiSSID, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblSettingsWifiSSID, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblSettingsWifiSSID, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtSettingsWifiSSID = lv_textarea_create(ui_scrSettings);
    lv_obj_set_width(ui_txtSettingsWifiSSID, 150);
    lv_obj_set_height(ui_txtSettingsWifiSSID, 32);
    lv_obj_set_x(ui_txtSettingsWifiSSID, 38);
    lv_obj_set_y(ui_txtSettingsWifiSSID, -58);
    lv_obj_set_align(ui_txtSettingsWifiSSID, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_txtSettingsWifiSSID, "SSID..");
    lv_obj_set_style_text_font(ui_txtSettingsWifiSSID, &ui_font_Verdana11, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_txtSettingsWifiSSID, &ui_font_Verdana11, LV_PART_SELECTED | LV_STATE_DEFAULT);

    ui_lblSettingsWifiKey = lv_label_create(ui_scrSettings);
    lv_obj_set_width(ui_lblSettingsWifiKey, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSettingsWifiKey, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSettingsWifiKey, -100);
    lv_obj_set_y(ui_lblSettingsWifiKey, -17);
    lv_obj_set_align(ui_lblSettingsWifiKey, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSettingsWifiKey, "KEYPHRASE");
    lv_obj_set_style_text_color(ui_lblSettingsWifiKey, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblSettingsWifiKey, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblSettingsWifiKey, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtSettingsWifiKey = lv_textarea_create(ui_scrSettings);
    lv_obj_set_width(ui_txtSettingsWifiKey, 150);
    lv_obj_set_height(ui_txtSettingsWifiKey, 32);
    lv_obj_set_x(ui_txtSettingsWifiKey, 38);
    lv_obj_set_y(ui_txtSettingsWifiKey, -19);
    lv_obj_set_align(ui_txtSettingsWifiKey, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_txtSettingsWifiKey, "KEYPHRASE..");
    lv_obj_set_style_text_font(ui_txtSettingsWifiKey, &ui_font_Verdana11, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_txtSettingsWifiKey, &ui_font_Verdana11, LV_PART_SELECTED | LV_STATE_DEFAULT);

    ui_lblSettingsWifiMode = lv_label_create(ui_scrSettings);
    lv_obj_set_width(ui_lblSettingsWifiMode, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSettingsWifiMode, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSettingsWifiMode, -100);
    lv_obj_set_y(ui_lblSettingsWifiMode, 22);
    lv_obj_set_align(ui_lblSettingsWifiMode, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSettingsWifiMode, "MODE");
    lv_obj_set_style_text_color(ui_lblSettingsWifiMode, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblSettingsWifiMode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblSettingsWifiMode, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblSettingsWifiModeAP = lv_label_create(ui_scrSettings);
    lv_obj_set_width(ui_lblSettingsWifiModeAP, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSettingsWifiModeAP, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSettingsWifiModeAP, -14);
    lv_obj_set_y(ui_lblSettingsWifiModeAP, 22);
    lv_obj_set_align(ui_lblSettingsWifiModeAP, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSettingsWifiModeAP, "AP");
    lv_obj_set_style_text_color(ui_lblSettingsWifiModeAP, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblSettingsWifiModeAP, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblSettingsWifiModeAP, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblSettingsWifiModeSTA = lv_label_create(ui_scrSettings);
    lv_obj_set_width(ui_lblSettingsWifiModeSTA, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSettingsWifiModeSTA, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSettingsWifiModeSTA, 85);
    lv_obj_set_y(ui_lblSettingsWifiModeSTA, 22);
    lv_obj_set_align(ui_lblSettingsWifiModeSTA, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSettingsWifiModeSTA, "STA");
    lv_obj_set_style_text_color(ui_lblSettingsWifiModeSTA, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblSettingsWifiModeSTA, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblSettingsWifiModeSTA, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnSettingsSave = lv_btn_create(ui_scrSettings);
    lv_obj_set_width(ui_btnSettingsSave, 145);
    lv_obj_set_height(ui_btnSettingsSave, 41);
    lv_obj_set_x(ui_btnSettingsSave, 43);
    lv_obj_set_y(ui_btnSettingsSave, 103);
    lv_obj_set_align(ui_btnSettingsSave, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnSettingsSave, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnSettingsSave, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblSettingsSave = lv_label_create(ui_btnSettingsSave);
    lv_obj_set_width(ui_lblSettingsSave, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblSettingsSave, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblSettingsSave, 0);
    lv_obj_set_y(ui_lblSettingsSave, 1);
    lv_obj_set_align(ui_lblSettingsSave, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblSettingsSave, "SAVE SETTINGS");
    lv_obj_set_style_text_color(ui_lblSettingsSave, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblSettingsSave, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblSettingsSave, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblSettingsSave, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnRotate = lv_btn_create(ui_scrSettings);
    lv_obj_set_width(ui_btnRotate, 89);
    lv_obj_set_height(ui_btnRotate, 41);
    lv_obj_set_x(ui_btnRotate, -96);
    lv_obj_set_y(ui_btnRotate, 104);
    lv_obj_set_align(ui_btnRotate, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnRotate, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnRotate, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblRotate = lv_label_create(ui_btnRotate);
    lv_obj_set_width(ui_lblRotate, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblRotate, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblRotate, 0);
    lv_obj_set_y(ui_lblRotate, 1);
    lv_obj_set_align(ui_lblRotate, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblRotate, "ROTATE");
    lv_obj_set_style_text_color(ui_lblRotate, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblRotate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblRotate, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblRotate, &ui_font_Verdana16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_btnSettingsOTA, ui_event_btnSettingsOTA, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnSettingsBack, ui_event_btnSettingsBack, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnRotate, ui_event_btnRotate, LV_EVENT_ALL, NULL);

}
