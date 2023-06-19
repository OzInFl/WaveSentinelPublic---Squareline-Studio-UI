// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.4
// Project name: Tempest2

#include "../ui.h"

void ui_scrWifiScanner_screen_init(void)
{
    ui_scrWifiScanner = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_scrWifiScanner, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_scrWifiScanner, &ui_img_blankpgbkgnd_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblWifiScan = lv_label_create(ui_scrWifiScanner);
    lv_obj_set_width(ui_lblWifiScan, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblWifiScan, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblWifiScan, 0);
    lv_obj_set_y(ui_lblWifiScan, -220);
    lv_obj_set_align(ui_lblWifiScan, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblWifiScan, "WiFi SCANNER");
    lv_label_set_recolor(ui_lblWifiScan, "true");
    lv_obj_set_style_text_color(ui_lblWifiScan, lv_color_hex(0xFF9100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblWifiScan, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblWifiScan, &ui_font_Verdana18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnWifiScannerScan = lv_btn_create(ui_scrWifiScanner);
    lv_obj_set_width(ui_btnWifiScannerScan, 100);
    lv_obj_set_height(ui_btnWifiScannerScan, 50);
    lv_obj_set_x(ui_btnWifiScannerScan, 0);
    lv_obj_set_y(ui_btnWifiScannerScan, 114);
    lv_obj_set_align(ui_btnWifiScannerScan, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnWifiScannerScan, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnWifiScannerScan, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_btnWiFiScannerBack = lv_btn_create(ui_scrWifiScanner);
    lv_obj_set_width(ui_btnWiFiScannerBack, 110);
    lv_obj_set_height(ui_btnWiFiScannerBack, 50);
    lv_obj_set_x(ui_btnWiFiScannerBack, 70);
    lv_obj_set_y(ui_btnWiFiScannerBack, 195);
    lv_obj_set_align(ui_btnWiFiScannerBack, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnWiFiScannerBack, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnWiFiScannerBack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnWiFiScannerBack, lv_color_hex(0xFFF700), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnWiFiScannerBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_scrWifiScanner);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, 69);
    lv_obj_set_y(ui_Label3, 195);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "BACK");
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblWifiScannerScan = lv_label_create(ui_scrWifiScanner);
    lv_obj_set_width(ui_lblWifiScannerScan, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblWifiScannerScan, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblWifiScannerScan, 0);
    lv_obj_set_y(ui_lblWifiScannerScan, 115);
    lv_obj_set_align(ui_lblWifiScannerScan, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblWifiScannerScan, "SCAN\nWiFi");
    lv_obj_set_style_text_align(ui_lblWifiScannerScan, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblWifiScannerScan, &ui_font_Verdana18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtWifiScanNetsFound = lv_textarea_create(ui_scrWifiScanner);
    lv_obj_set_width(ui_txtWifiScanNetsFound, 289);
    lv_obj_set_height(ui_txtWifiScanNetsFound, 161);
    lv_obj_set_x(ui_txtWifiScanNetsFound, 0);
    lv_obj_set_y(ui_txtWifiScanNetsFound, -68);
    lv_obj_set_align(ui_txtWifiScanNetsFound, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_txtWifiScanNetsFound, "Networks Found...");
    lv_obj_set_style_text_font(ui_txtWifiScanNetsFound, &ui_font_Verdana12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_txtWifiScanNetsFound, &ui_font_Verdana12, LV_PART_SELECTED | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_txtWifiScanNetsFound, &ui_font_Verdana12,
                               LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);

    ui_lblWifiScanNetsFound = lv_label_create(ui_scrWifiScanner);
    lv_obj_set_width(ui_lblWifiScanNetsFound, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblWifiScanNetsFound, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblWifiScanNetsFound, 0);
    lv_obj_set_y(ui_lblWifiScanNetsFound, -159);
    lv_obj_set_align(ui_lblWifiScanNetsFound, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblWifiScanNetsFound, "WiFi Networks Found:");
    lv_obj_set_style_text_color(ui_lblWifiScanNetsFound, lv_color_hex(0xFAFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblWifiScanNetsFound, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ddlWifiSSID = lv_dropdown_create(ui_scrWifiScanner);
    lv_dropdown_set_options(ui_ddlWifiSSID, "");
    lv_obj_set_width(ui_ddlWifiSSID, 289);
    lv_obj_set_height(ui_ddlWifiSSID, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ddlWifiSSID, 0);
    lv_obj_set_y(ui_ddlWifiSSID, 46);
    lv_obj_set_align(ui_ddlWifiSSID, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ddlWifiSSID, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_font(ui_ddlWifiSSID, &ui_font_Verdana14, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_ddlWifiSSID, &lv_font_montserrat_12, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(lv_dropdown_get_list(ui_ddlWifiSSID), &ui_font_Verdana14,  LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(lv_dropdown_get_list(ui_ddlWifiSSID), &ui_font_Verdana14,
                               LV_PART_SELECTED | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_btnWifiScannerScan, ui_event_btnWifiScannerScan, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnWiFiScannerBack, ui_event_btnWiFiScannerBack, LV_EVENT_ALL, NULL);

}
