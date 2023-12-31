// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Clipper1

#include "../ui.h"

void ui_scrWifiApps_screen_init(void)
{
    ui_scrWifiApps = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_scrWifiApps, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_scrWifiApps, &ui_img_blankpgbkgnd_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblWifiMain = lv_label_create(ui_scrWifiApps);
    lv_obj_set_width(ui_lblWifiMain, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblWifiMain, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblWifiMain, 0);
    lv_obj_set_y(ui_lblWifiMain, -220);
    lv_obj_set_align(ui_lblWifiMain, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblWifiMain, "WIFI APPLICATIONS");
    lv_obj_set_style_text_color(ui_lblWifiMain, lv_color_hex(0xFF9100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblWifiMain, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblWifiMain, &ui_font_Verdana18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_tabWifiApps = lv_tabview_create(ui_scrWifiApps, LV_DIR_BOTTOM, 50);
    lv_obj_set_width(ui_tabWifiApps, 320);
    lv_obj_set_height(ui_tabWifiApps, 364);
    lv_obj_set_x(ui_tabWifiApps, 0);
    lv_obj_set_y(ui_tabWifiApps, -18);
    lv_obj_set_align(ui_tabWifiApps, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_tabWifiApps, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_tabWifiApps, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_tabWifiApps, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(lv_tabview_get_tab_btns(ui_tabWifiApps), lv_color_hex(0x808080),
                                LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(lv_tabview_get_tab_btns(ui_tabWifiApps), 255,  LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(lv_tabview_get_tab_btns(ui_tabWifiApps), &ui_font_Verdana18,
                               LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(lv_tabview_get_tab_btns(ui_tabWifiApps), lv_color_hex(0xFFFFFF),
                              LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(lv_tabview_get_tab_btns(ui_tabWifiApps), 0,  LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WifiScan = lv_tabview_add_tab(ui_tabWifiApps, "WiFi Scan");

    ui_btnWifiScannerScan = lv_btn_create(ui_WifiScan);
    lv_obj_set_width(ui_btnWifiScannerScan, 100);
    lv_obj_set_height(ui_btnWifiScannerScan, 41);
    lv_obj_set_x(ui_btnWifiScannerScan, 0);
    lv_obj_set_y(ui_btnWifiScannerScan, 116);
    lv_obj_set_align(ui_btnWifiScannerScan, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnWifiScannerScan, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnWifiScannerScan, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_lblWifiScannerScan = lv_label_create(ui_btnWifiScannerScan);
    lv_obj_set_width(ui_lblWifiScannerScan, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblWifiScannerScan, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblWifiScannerScan, 1);
    lv_obj_set_y(ui_lblWifiScannerScan, 2);
    lv_obj_set_align(ui_lblWifiScannerScan, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblWifiScannerScan, "SCAN\nWiFi");
    lv_obj_set_style_text_align(ui_lblWifiScannerScan, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblWifiScannerScan, &ui_font_Verdana18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtWifiScanNetsFound = lv_textarea_create(ui_WifiScan);
    lv_obj_set_width(ui_txtWifiScanNetsFound, 289);
    lv_obj_set_height(ui_txtWifiScanNetsFound, 161);
    lv_obj_set_x(ui_txtWifiScanNetsFound, 0);
    lv_obj_set_y(ui_txtWifiScanNetsFound, -42);
    lv_obj_set_align(ui_txtWifiScanNetsFound, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_txtWifiScanNetsFound, "Networks Found...");
    lv_obj_set_style_text_font(ui_txtWifiScanNetsFound, &ui_font_Verdana12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_txtWifiScanNetsFound, &ui_font_Verdana12, LV_PART_SELECTED | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_txtWifiScanNetsFound, &ui_font_Verdana12,
                               LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);

    ui_lblWifiScanNetsFound = lv_label_create(ui_WifiScan);
    lv_obj_set_width(ui_lblWifiScanNetsFound, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblWifiScanNetsFound, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblWifiScanNetsFound, 0);
    lv_obj_set_y(ui_lblWifiScanNetsFound, -134);
    lv_obj_set_align(ui_lblWifiScanNetsFound, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblWifiScanNetsFound, "WiFi Networks Found:");
    lv_obj_set_style_text_color(ui_lblWifiScanNetsFound, lv_color_hex(0xFAFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblWifiScanNetsFound, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ddlWifiSSID = lv_dropdown_create(ui_WifiScan);
    lv_dropdown_set_options(ui_ddlWifiSSID, "");
    lv_obj_set_width(ui_ddlWifiSSID, 289);
    lv_obj_set_height(ui_ddlWifiSSID, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ddlWifiSSID, 0);
    lv_obj_set_y(ui_ddlWifiSSID, 65);
    lv_obj_set_align(ui_ddlWifiSSID, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ddlWifiSSID, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_font(ui_ddlWifiSSID, &ui_font_Verdana14, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_ddlWifiSSID, &lv_font_montserrat_12, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(lv_dropdown_get_list(ui_ddlWifiSSID), &ui_font_Verdana14,  LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(lv_dropdown_get_list(ui_ddlWifiSSID), &ui_font_Verdana14,
                               LV_PART_SELECTED | LV_STATE_DEFAULT);

    ui_WifiApps = lv_tabview_add_tab(ui_tabWifiApps, "Wifi Apps");

    ui_btnWifiBack = lv_btn_create(ui_scrWifiApps);
    lv_obj_set_width(ui_btnWifiBack, 110);
    lv_obj_set_height(ui_btnWifiBack, 50);
    lv_obj_set_x(ui_btnWifiBack, -70);
    lv_obj_set_y(ui_btnWifiBack, 202);
    lv_obj_set_align(ui_btnWifiBack, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnWifiBack, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnWifiBack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_btnWifiBack, lv_color_hex(0xFFF700), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnWifiBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblWifiBack = lv_label_create(ui_btnWifiBack);
    lv_obj_set_width(ui_lblWifiBack, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblWifiBack, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblWifiBack, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblWifiBack, "BACK");
    lv_obj_set_style_text_color(ui_lblWifiBack, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblWifiBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblWifiBack, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_btnWifiScannerScan, ui_event_btnWifiScannerScan, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnWifiBack, ui_event_btnWifiBack, LV_EVENT_ALL, NULL);

}
