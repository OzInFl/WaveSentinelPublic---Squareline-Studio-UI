// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.3.4
// Project name: Tempest2

#include "ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets\WifiLogo.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t ui_img_wifilogo_png_data[] = {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xC5,0x08,0x28,0x68,0x11,0x43,0xAA,0x19,0x52,0xCB,0x19,0x5B,0xCB,0x19,0x5B,0xAA,0x19,0x52,0x68,0x11,0x46,0xE5,0x08,0x2A,0x20,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x00,0x0F,0xCB,0x19,0x5B,0xF1,0x2A,0x94,0xB7,0x3B,0xBE,0x5A,0x44,0xFF,0xBC,0x44,0xFF,0xBC,0x4C,0xFF,0xBD,0x4C,0xFF,0xBD,0x4C,0xFF,0xBC,0x4C,0xFF,0xBC,0x4C,0xFF,0x7B,0x44,0xFF,0xD7,0x3B,0xC0,0xF2,0x2A,0x96,0xCB,0x19,0x5D,0x62,0x08,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xA3,0x08,0x1B,0xB0,0x2A,0x85,0x19,0x44,0xD1,0xDD,0x4C,0xFF,0xDD,0x4C,0xFF,0x7B,0x44,0xFF,0x39,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x39,0x3C,0xFF,0x7B,0x44,0xFF,0xDD,0x4C,0xFF,0xDD,0x4C,0xFF,0x39,0x44,0xD3,0xB0,0x2A,0x87,0xA4,0x08,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6E,0x22,0x78,0x5A,0x44,0xDD,0xFE,0x4C,0xFF,0x5B,0x44,0xFF,0x18,0x3C,0xFF,0x18,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x18,0x3C,0xFF,0x18,0x3C,0xFF,0x5A,0x44,0xFF,0xDE,0x4C,0xFF,0x7B,0x44,0xE1,0x6F,0x2A,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0xC4,0x08,0x26,0xD7,0x3B,0xBE,0xFE,0x4C,0xFF,0x5A,0x44,0xFF,0xF8,0x3B,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xF8,0x3B,0xFF,0x5A,0x44,0xFF,0xFE,0x4C,0xFF,0xD7,0x3B,0xC4,0xE5,0x10,0x2A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0x19,0x48,0x9B,0x44,0xE8,0xDD,0x4C,0xFF,0xF8,0x3B,0xFF,
    0x18,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x18,0x3C,0xFF,0xF8,0x3B,0xFF,0xBD,0x4C,0xFF,0x9C,0x44,0xEA,0x89,0x19,0x4C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xAA,0x19,0x52,0xDE,0x4C,0xFB,0x7B,0x44,0xFF,0xF8,0x3B,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,
    0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xF8,0x3B,0xFF,0x7B,0x44,0xFF,0xDE,0x4C,0xFB,0xAA,0x19,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x48,0x11,0x41,0xFE,0x4C,0xFB,0x5B,0x44,0xFF,0xF8,0x3B,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,
    0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xF8,0x3B,0xFF,0x5B,0x44,0xFF,0xFE,0x4C,0xFD,0x48,0x11,0x41,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xA4,0x08,0x22,0x9C,0x4C,0xEC,0x7B,0x44,0xFF,0xF8,0x3B,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,
    0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xD8,0x33,0xFF,0x98,0x23,0xFF,0x78,0x23,0xFF,0x98,0x23,0xFF,0x98,0x23,0xFF,0x98,0x23,0xFF,0x98,0x23,0xFF,0x98,0x23,0xFF,0x98,0x23,0xFF,0x77,0x23,0xFF,0xFA,0x2B,0xFF,0x1B,0x2C,0xE8,0x43,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xA4,0x08,0x20,0x27,0x11,0x39,0x06,0x11,0x37,0x06,0x11,0x35,0x06,0x11,0x35,0x06,0x11,0x35,0x26,0x11,0x37,0xB6,0x3B,0xB9,0xBD,0x4C,0xFF,0xF8,0x3B,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x39,0x44,0xFF,0xD8,0x33,0xFF,0x78,0x1B,0xFF,0x39,0x44,0xFF,0xFA,0x6C,0xFF,
    0x1A,0x6D,0xFF,0xFA,0x6C,0xFF,0xFA,0x6C,0xFF,0xFA,0x6C,0xFF,0xFA,0x6C,0xFF,0xFA,0x6C,0xFF,0xFA,0x6C,0xFF,0xFA,0x6C,0xFF,0xD9,0x6C,0xFF,0x9E,0x75,0xFF,0xB8,0x6C,0xC8,0x08,0x42,0x43,0xE7,0x39,0x3F,0xE7,0x39,0x3F,0xE7,0x39,0x3F,0x08,0x42,0x41,0xE7,0x39,0x3F,0x04,0x21,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x22,0x67,0x95,0x3B,0xB3,0x5A,0x44,0xDB,0x9C,0x44,0xFF,0x9B,0x44,0xFF,0x7B,0x44,0xFF,0x7B,0x44,0xFF,0x7B,0x44,0xFF,0x9B,0x44,0xFF,0x5A,0x44,0xFF,0xF8,0x3B,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x44,0xFF,0xB8,0x2B,0xFF,0xB8,0x2B,0xFF,0xFB,0x9D,0xFF,0x7D,0xEF,0xFF,0xFE,0xFF,0xFF,0xFE,0xFF,0xFF,0xDE,0xFF,0xFF,0xDE,0xFF,0xFF,0xDE,0xFF,0xFF,
    0xDE,0xFF,0xFF,0xDE,0xFF,0xFF,0xDE,0xFF,0xFF,0xDE,0xFF,0xFF,0xDE,0xFF,0xFF,0xDD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBE,0xF7,0xFF,0x59,0xCE,0xD1,0x8E,0x73,0x76,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x62,0x08,0x15,0xB6,0x3B,0xBC,0xFE,0x4C,0xFF,0x9C,0x44,0xFF,0x3A,0x44,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xD8,0x33,0xFF,0xB8,0x2B,0xFF,0xBC,0xC6,0xFF,0xFF,0xFF,0xFF,0xDE,0xFF,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0xFF,
    0x9E,0xF7,0xFF,0x9D,0xF7,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0xFF,0xBE,0xF7,0xFF,0xBE,0xF7,0xFF,0xBE,0xF7,0xFF,0x9E,0xF7,0xFF,0xBE,0xF7,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x9A,0xD6,0xD7,0x04,0x21,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x62,0x00,0x11,0x39,0x44,0xD5,0xDE,0x4C,0xFF,0x18,0x3C,0xFF,0x18,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x58,0x1B,0xFF,0xDB,0x95,0xFF,0xFF,0xFF,0xFF,0x7D,0xF7,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,
    0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0x5D,0xEF,0xF4,0xC3,0x18,0x17,0x00,0x00,0x00,0x00,0x00,0x00,0x54,0x33,0xA4,0xFE,0x4C,0xFF,0xF8,0x3B,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xD8,0x33,0xFF,0xF8,0x3B,0xFF,0x3D,0xDF,0xFF,0xFE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,
    0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0x38,0xC6,0xCC,0x00,0x00,0x00,0x47,0x11,0x3A,0xFE,0x4C,0xFB,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x18,0x3C,0xFF,0x19,0x3C,0xFF,0x5B,0x3C,0xFF,0x39,0x3C,0xFF,0x18,0x3C,0xFF,0x18,0x3C,0xFF,0x3A,0x3C,0xFF,0x5B,0x3C,0xFF,0x19,0x3C,0xFF,0x18,0x3C,0xFF,0x19,0x3C,0xFF,0x5B,0x3C,0xFF,0x3A,0x3C,0xFF,0x18,0x3C,0xFF,0x18,0x3C,0xFF,0x19,0x3C,0xFF,0x5B,0x3C,0xFF,0x39,0x3C,0xFF,0x18,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x79,0x54,0xFF,0x9D,0xF7,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x9E,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x9E,0xF7,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,
    0x7D,0xEF,0xFF,0x9E,0xF7,0xFF,0xFF,0xFF,0xFF,0x49,0x4A,0x48,0xF1,0x2A,0xF2,0xDD,0x4C,0xFF,0x18,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x18,0x3C,0xFF,0x95,0x3B,0xFF,0xF8,0x3B,0xFF,0x19,0x3C,0xFF,0x3A,0x3C,0xFF,0xD7,0x3B,0xFF,0x95,0x3B,0xFF,0x39,0x3C,0xFF,0x18,0x3C,0xFF,0x39,0x3C,0xFF,0x95,0x3B,0xFF,0xD6,0x3B,0xFF,0x39,0x3C,0xFF,0x19,0x3C,0xFF,0x18,0x3C,0xFF,0x95,0x3B,0xFF,0xF8,0x3B,0xFF,0x39,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x79,0x54,0xFF,0x7D,0xEF,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x9E,0xF7,0xFF,0xDE,0xFF,0xFF,0xD8,0xB5,0xFF,0xF5,0x94,0xFF,0x56,0xA5,0xFF,0x56,0xA5,0xFF,0x56,0xA5,0xFF,0xF5,0x94,0xFF,0xD8,0xB5,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0xFF,0xBE,0xF7,0xFF,0x3D,0xE7,0xFF,0xDB,0xDE,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0x96,0xB5,0xF2,
    0xF8,0x3B,0xF2,0x39,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x5B,0x3C,0xFF,0x32,0x3B,0xFF,0x65,0x31,0xFF,0x11,0x3B,0xFF,0x7C,0x3C,0xFF,0x3A,0x3C,0xFF,0x6D,0x3A,0xFF,0xC8,0x31,0xFF,0xD6,0x3B,0xFF,0x9C,0x44,0xFF,0xD6,0x3B,0xFF,0xC8,0x31,0xFF,0x6D,0x3A,0xFF,0x3A,0x3C,0xFF,0x7C,0x44,0xFF,0x32,0x3B,0xFF,0x64,0x31,0xFF,0xCF,0x3A,0xFF,0x5B,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x79,0x4C,0xFF,0x7D,0xEF,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0xF8,0xBD,0xFF,0x28,0x11,0xFF,0xE7,0x08,0xFF,0x85,0x00,0xFF,0xA6,0x00,0xFF,0xA6,0x00,0xFF,0x44,0x00,0xFF,0x85,0x00,0xFF,0x9A,0xCE,0xFF,0xFF,0xFF,0xFF,0xBE,0xF7,0xFF,0x0E,0x53,0xFF,0x27,0x09,0xFF,0x9A,0xCE,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0x1C,0xE7,0xF2,0x39,0x44,0xF2,0xF8,0x3B,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,
    0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x7B,0x3C,0xFF,0x32,0x3B,0xFF,0xA6,0x31,0xFF,0x8E,0x3A,0xFF,0x7B,0x3C,0xFF,0xD7,0x3B,0xFF,0x2A,0x32,0xFF,0xC8,0x31,0xFF,0x32,0x3B,0xFF,0xDE,0x44,0xFF,0x32,0x3B,0xFF,0xA6,0x31,0xFF,0x8E,0x3A,0xFF,0x39,0x3C,0xFF,0x7B,0x3C,0xFF,0x53,0x3B,0xFF,0xC7,0x31,0xFF,0xF1,0x3A,0xFF,0x5A,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x79,0x4C,0xFF,0x7D,0xEF,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0xF5,0x94,0xFF,0x07,0x09,0xFF,0xAC,0x42,0xFF,0xB0,0x6B,0xFF,0x90,0x63,0xFF,0x90,0x63,0xFF,0x2F,0x53,0xFF,0x11,0x74,0xFF,0x3D,0xE7,0xFF,0xDF,0xFF,0xFF,0xBE,0xF7,0xFF,0x8C,0x42,0xFF,0x85,0x00,0xFF,0x59,0xC6,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0xF2,0x19,0x3C,0xF2,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x5A,0x3C,0xFF,0xB6,0x3B,0xFF,
    0x0A,0x32,0xFF,0x2B,0x32,0xFF,0x39,0x3C,0xFF,0xB6,0x3B,0xFF,0x09,0x32,0xFF,0xE9,0x31,0xFF,0xCF,0x3A,0xFF,0x9C,0x44,0xFF,0xF0,0x3A,0xFF,0xA6,0x31,0xFF,0x11,0x3B,0xFF,0x5B,0x3C,0xFF,0x18,0x3C,0xFF,0x3A,0x3C,0xFF,0x19,0x3C,0xFF,0x3A,0x3C,0xFF,0x19,0x3C,0xFF,0x18,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x79,0x4C,0xFF,0x7D,0xEF,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0x56,0xA5,0xFF,0x85,0x00,0xFF,0xD0,0x6B,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBE,0xF7,0xFF,0x7D,0xEF,0xFF,0xBE,0xF7,0xFF,0x7D,0xEF,0xFF,0x1C,0xE7,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x9E,0xF7,0xF2,0x19,0x3C,0xF2,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x39,0x3C,0xFF,0x19,0x3C,0xFF,0x6D,0x3A,0xFF,0xC8,0x31,0xFF,0xD7,0x3B,0xFF,0x53,0x3B,0xFF,
    0xE9,0x31,0xFF,0x0A,0x32,0xFF,0x8D,0x3A,0xFF,0x19,0x3C,0xFF,0x8D,0x3A,0xFF,0xC8,0x31,0xFF,0x74,0x3B,0xFF,0x5B,0x3C,0xFF,0x3A,0x3C,0xFF,0xB6,0x3B,0xFF,0x8D,0x3A,0xFF,0x74,0x3B,0xFF,0x3A,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x79,0x4C,0xFF,0x7D,0xEF,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0x56,0xA5,0xFF,0x65,0x00,0xFF,0xF1,0x73,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x9D,0xF7,0xFF,0xBE,0xF7,0xFF,0x76,0xAD,0xFF,0x73,0x84,0xFF,0x3D,0xE7,0xFF,0xBE,0xF7,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xF2,0x19,0x3C,0xF2,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x5A,0x3C,0xFF,0xCF,0x3A,0xFF,0xA7,0x31,0xFF,0x53,0x3B,0xFF,0x11,0x3B,0xFF,0x09,0x32,0xFF,0x2A,0x32,0xFF,0x6C,0x32,0xFF,0x53,0x3B,0xFF,
    0x4B,0x32,0xFF,0x2B,0x32,0xFF,0xD7,0x3B,0xFF,0x3A,0x3C,0xFF,0x7B,0x3C,0xFF,0x11,0x3B,0xFF,0x44,0x31,0xFF,0xAE,0x3A,0xFF,0x5A,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x79,0x4C,0xFF,0x7D,0xEF,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0x56,0xA5,0xFF,0xE7,0x08,0xFF,0x0E,0x53,0xFF,0xD8,0xB5,0xFF,0x97,0xAD,0xFF,0x76,0xAD,0xFF,0x36,0x9D,0xFF,0x19,0xBE,0xFF,0xBE,0xF7,0xFF,0xDF,0xFF,0xFF,0x9E,0xF7,0xFF,0x2B,0x32,0xFF,0x24,0x00,0xFF,0x18,0xBE,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xF2,0x19,0x3C,0xF2,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x7B,0x3C,0xFF,0x32,0x3B,0xFF,0xC8,0x31,0xFF,0x8D,0x3A,0xFF,0x8D,0x3A,0xFF,0x2B,0x32,0xFF,0x4B,0x32,0xFF,0x4B,0x32,0xFF,0x8D,0x3A,0xFF,0x0A,0x32,0xFF,0x8D,0x3A,0xFF,0x39,0x3C,0xFF,0x19,0x3C,0xFF,
    0x5B,0x3C,0xFF,0x32,0x3B,0xFF,0xA7,0x31,0xFF,0xCF,0x3A,0xFF,0x5A,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x79,0x4C,0xFF,0x7D,0xEF,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0x56,0xA5,0xFF,0xA9,0x21,0xFF,0xCA,0x29,0xFF,0xA6,0x00,0xFF,0xC6,0x00,0xFF,0xC6,0x00,0xFF,0x65,0x00,0xFF,0xC6,0x00,0xFF,0x9A,0xCE,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0xAD,0x42,0xFF,0x27,0x09,0xFF,0x19,0xBE,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xF2,0x19,0x3C,0xF2,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x5B,0x3C,0xFF,0x95,0x3B,0xFF,0x0A,0x32,0xFF,0x2A,0x32,0xFF,0x0A,0x32,0xFF,0xAE,0x3A,0xFF,0xD0,0x3A,0xFF,0x0A,0x32,0xFF,0x2B,0x32,0xFF,0xE9,0x31,0xFF,0xF0,0x3A,0xFF,0x5B,0x3C,0xFF,0x19,0x3C,0xFF,0x5B,0x3C,0xFF,0x32,0x3B,0xFF,0xA7,0x31,0xFF,0xCF,0x3A,0xFF,
    0x5A,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x79,0x4C,0xFF,0x7D,0xEF,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0x56,0xA5,0xFF,0x48,0x11,0xFF,0x8C,0x42,0xFF,0x6F,0x5B,0xFF,0x4F,0x5B,0xFF,0x4F,0x5B,0xFF,0xEE,0x52,0xFF,0xD1,0x6B,0xFF,0x3C,0xE7,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0xCD,0x4A,0xFF,0x27,0x11,0xFF,0x19,0xBE,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xF2,0x19,0x3C,0xF2,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x3A,0x3C,0xFF,0xF8,0x3B,0xFF,0x4C,0x32,0xFF,0x2A,0x32,0xFF,0xE9,0x31,0xFF,0x12,0x3B,0xFF,0x95,0x3B,0xFF,0x09,0x32,0xFF,0x4B,0x32,0xFF,0xE9,0x31,0xFF,0x53,0x3B,0xFF,0x7B,0x3C,0xFF,0x19,0x3C,0xFF,0x5B,0x3C,0xFF,0x32,0x3B,0xFF,0xA7,0x31,0xFF,0xCF,0x3A,0xFF,0x5A,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,
    0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x79,0x4C,0xFF,0x7D,0xEF,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0x56,0xA5,0xFF,0x85,0x00,0xFF,0xB0,0x6B,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBE,0xF7,0xFF,0xDE,0xFF,0xFF,0x7D,0xEF,0xFF,0xCD,0x4A,0xFF,0x27,0x11,0xFF,0x19,0xBE,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x9E,0xF7,0xF2,0x39,0x44,0xF2,0xF8,0x3B,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x3A,0x3C,0xFF,0xAE,0x3A,0xFF,0x09,0x32,0xFF,0xE9,0x31,0xFF,0x53,0x3B,0xFF,0x19,0x3C,0xFF,0x2B,0x32,0xFF,0x2A,0x32,0xFF,0x2A,0x32,0xFF,0xB6,0x3B,0xFF,0x5A,0x3C,0xFF,0x19,0x3C,0xFF,0x5B,0x3C,0xFF,0x32,0x3B,0xFF,0xA7,0x31,0xFF,0xCF,0x3A,0xFF,0x5A,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x79,0x4C,0xFF,0x7D,0xEF,0xFF,
    0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0x56,0xA5,0xFF,0x85,0x00,0xFF,0xB0,0x6B,0xFF,0xFF,0xFF,0xFF,0xDE,0xFF,0xFF,0xBE,0xF7,0xFF,0xBE,0xF7,0xFF,0x9E,0xF7,0xFF,0x7D,0xEF,0xFF,0xDF,0xFF,0xFF,0x7D,0xEF,0xFF,0xCD,0x4A,0xFF,0x27,0x11,0xFF,0x19,0xBE,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x9E,0xF7,0xF2,0xF7,0x3B,0xF2,0x3A,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x18,0x3C,0xFF,0x7B,0x3C,0xFF,0x12,0x3B,0xFF,0xE9,0x31,0xFF,0x09,0x32,0xFF,0x95,0x3B,0xFF,0x7B,0x3C,0xFF,0x8D,0x3A,0xFF,0xE9,0x31,0xFF,0x6C,0x3A,0xFF,0x19,0x3C,0xFF,0x39,0x3C,0xFF,0x19,0x3C,0xFF,0x5B,0x3C,0xFF,0x32,0x3B,0xFF,0xA7,0x31,0xFF,0xCF,0x3A,0xFF,0x5A,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x79,0x4C,0xFF,0x7D,0xEF,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,
    0xFF,0xFF,0xFF,0x36,0x9D,0xFF,0xA6,0x00,0xFF,0x90,0x63,0xFF,0xFF,0xFF,0xFF,0x9E,0xF7,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xDF,0xFF,0xFF,0x7D,0xEF,0xFF,0xCD,0x4A,0xFF,0x27,0x11,0xFF,0x19,0xBE,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xDF,0xFF,0xFF,0x3C,0xE7,0xF2,0xF1,0x2A,0xF2,0xDD,0x4C,0xFF,0x18,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x7B,0x3C,0xFF,0x74,0x3B,0xFF,0xA6,0x31,0xFF,0x0A,0x32,0xFF,0xF8,0x3B,0xFF,0x9C,0x44,0xFF,0xCF,0x3A,0xFF,0x44,0x31,0xFF,0xCF,0x3A,0xFF,0x5B,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x7B,0x3C,0xFF,0x11,0x3B,0xFF,0x44,0x31,0xFF,0xAE,0x3A,0xFF,0x5B,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x59,0x4C,0xFF,0x7D,0xEF,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0x15,0x95,0xFF,0x02,0x00,0xFF,0x0E,0x53,0xFF,
    0xFF,0xFF,0xFF,0x9E,0xF7,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xDF,0xFF,0xFF,0x7D,0xEF,0xFF,0x2B,0x32,0xFF,0x65,0x00,0xFF,0xF8,0xB5,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0xB6,0xB5,0xF2,0x48,0x11,0x3B,0xFE,0x4C,0xF1,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x39,0x3C,0xFF,0x18,0x3C,0xFF,0x8E,0x3A,0xFF,0x11,0x3B,0xFF,0x3A,0x3C,0xFF,0x5A,0x3C,0xFF,0x95,0x3B,0xFF,0x4C,0x32,0xFF,0x95,0x3B,0xFF,0x5A,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x3A,0x3C,0xFF,0xB6,0x3B,0xFF,0x6C,0x3A,0xFF,0x74,0x3B,0xFF,0x3A,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x59,0x4C,0xFF,0x7D,0xEF,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xDF,0xFF,0xFF,0xBB,0xD6,0xFF,0xCD,0x4A,0xFF,0x35,0x9D,0xFF,0xDF,0xFF,0xFF,0x9E,0xF7,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,
    0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x9E,0xF7,0xFF,0xDF,0xFF,0xFF,0xF1,0x73,0xFF,0x4B,0x32,0xFF,0xFC,0xDE,0xFF,0xDF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x9E,0xF7,0xFF,0xFF,0xFF,0xFD,0x8A,0x52,0x4C,0x00,0x00,0x00,0x74,0x33,0xA5,0xFE,0x4C,0xFF,0xF8,0x3B,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x18,0x3C,0xFF,0x39,0x3C,0xFF,0x5A,0x3C,0xFF,0x3A,0x3C,0xFF,0x19,0x3C,0xFF,0xF8,0x3B,0xFF,0x3A,0x3C,0xFF,0x5A,0x3C,0xFF,0x3A,0x3C,0xFF,0x18,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x18,0x3C,0xFF,0x39,0x3C,0xFF,0x5B,0x3C,0xFF,0x3A,0x3C,0xFF,0x18,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x44,0xFF,0x78,0x23,0xFF,0x99,0x54,0xFF,0xBE,0xFF,0xFF,0x9E,0xF7,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x9E,0xF7,0xFF,
    0xBE,0xFF,0xFF,0xBE,0xF7,0xFF,0xDE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0x79,0xCE,0xCD,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0x08,0x16,0x5A,0x44,0xD3,0xDD,0x4C,0xFF,0xF8,0x3B,0xFF,0x18,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xF8,0x3B,0xFF,0x37,0x13,0xFF,0xFB,0xA5,0xFF,0xFE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xBE,0xF7,0xFF,0xDF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,
    0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0xBE,0xF7,0xF1,0x04,0x21,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xA3,0x08,0x1C,0xF8,0x3B,0xBD,0x1F,0x4D,0xF5,0x9B,0x44,0xFF,0x39,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0x19,0x3C,0xFF,0xF9,0x3B,0xFF,0xF8,0x3B,0xFF,0xF8,0x3B,0xFF,0xF8,0x3B,0xFF,0xF8,0x3B,0xFF,0xF8,0x3B,0xFF,0xF8,0x3B,0xFF,0xF8,0x3B,0xFF,0xF8,0x3B,0xFF,0xF8,0x3B,0xFF,0xF8,0x3B,0xFF,0xF8,0x3B,0xFF,0xF8,0x3B,0xFF,0x19,0x3C,0xFF,0xB8,0x2B,0xFF,0x17,0x0B,0xFF,0x1A,0x75,0xFF,0xFE,0xFF,0xFF,0xBE,0xF7,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x9E,0xF7,0xFF,0xBE,0xF7,0xFF,0xBE,0xF7,0xFF,0xBE,0xF7,0xFF,0x9E,0xF7,0xFF,0xBE,0xF7,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xDB,0xDE,0xD9,0x45,0x29,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4D,0x22,0x6A,0xD7,0x3B,0xB7,0x7B,0x44,0xD7,0x9C,0x44,0xFF,0x9B,0x44,0xFF,0x7B,0x44,0xFF,0x7B,0x44,0xFF,0x7B,0x44,0xFF,0x9B,0x44,0xFF,0x3A,0x3C,0xFF,0x98,0x2B,0xFF,0xB8,0x2B,0xFF,0xB8,0x2B,0xFF,0xB8,0x2B,0xFF,0xB8,0x2B,0xFF,0xB8,0x2B,0xFF,0xB8,0x2B,0xFF,0xB8,0x2B,0xFF,0xB8,0x2B,0xFF,0xB8,0x2B,0xFF,0xB8,0x2B,0xFF,0xB8,0x2B,0xFF,0x98,0x23,0xFF,0xF8,0x33,0xFF,0x9B,0x8D,0xFF,0xDE,0xFF,0xFF,0xDE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xBA,0xD6,0xD5,0xEF,0x7B,0x7A,0x20,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC5,0x08,0x26,0x26,0x11,0x34,0x06,0x11,0x34,0x06,0x11,0x32,0x06,0x11,0x32,0x06,0x11,0x32,0x26,0x11,0x34,0xD9,0xA5,0xC9,0x5F,0xDF,0xFF,0x7C,0xBE,0xFF,0x9C,0xC6,0xFF,0x9C,0xC6,0xFF,0x9C,0xC6,0xFF,0x9C,0xC6,0xFF,0x9C,0xC6,0xFF,0x9C,0xC6,0xFF,0x9C,0xC6,0xFF,0x9C,0xC6,0xFF,0x9C,0xC6,0xFF,0x9C,0xBE,0xFF,0x9C,0xBE,0xFF,0x3D,0xE7,0xFF,0xFE,0xFF,0xFF,0xBE,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0x1C,0xE7,0xDD,0x28,0x42,0x42,0xE7,0x39,0x3C,0xE7,0x39,0x3C,0xE7,0x39,0x3C,0x08,0x42,0x3E,0xE7,0x39,0x3C,0x45,0x29,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC5,0x41,0x42,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0xFF,0xFF,0xDE,0xFF,0xFF,0x7D,0xF7,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x86,0x31,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8A,0x52,0x50,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xEB,0x5A,0x5A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x63,0x62,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x6D,0x6B,0x6C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xAA,0x52,0x54,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x0C,0x63,0x5E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x86,0x31,0x2E,0xDB,0xDE,0xD5,0xFF,0xFF,0xFD,
    0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xDE,0xDB,0xC7,0x39,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x51,0x8C,0x89,0xDF,0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7D,0xEF,0xFF,
    0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0x7D,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0x92,0x94,0x8F,0x20,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x21,0x24,0xD3,0x9C,0x95,0x7D,0xEF,0xEB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBE,0xF7,0xFF,0x9E,0xF7,0xFF,
    0x9E,0xF7,0xFF,0x9E,0xF7,0xFF,0x7D,0xEF,0xFF,0x9E,0xF7,0xFF,0x9E,0xF7,0xFF,0xBE,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBE,0xF7,0xF1,0xF3,0x9C,0x9D,0x45,0x29,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC3,0x18,0x16,0x2C,0x63,0x64,0x55,0xAD,0xA7,0x3C,0xE7,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3C,0xE7,0xE5,0x96,0xB5,0xAD,0x6D,0x6B,0x6A,0xE3,0x18,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x61,0x08,0x0C,0x86,0x31,0x2E,0x69,0x4A,0x4A,0x0C,0x63,0x5E,0x8E,0x73,0x6E,0x8E,0x73,0x70,0x2C,0x63,0x64,0x69,0x4A,0x4C,0x86,0x31,0x30,0x82,0x10,0x0E,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const lv_img_dsc_t ui_img_wifilogo_png = {
    .header.always_zero = 0,
    .header.w = 60,
    .header.h = 42,
    .data_size = sizeof(ui_img_wifilogo_png_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = ui_img_wifilogo_png_data
};

