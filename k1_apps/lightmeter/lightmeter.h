#ifndef __LIGHTMETER_H__
#define __LIGHTMETER_H__

#include "../menu.h"

static uint8_t icon_data_lighter_24_24[] = {
    0x00, 0xC0, 0xF0, 0x18, 0x0C, 0x24, 0x46, 0x86, 0x02, 0x00, 0x00, 0x00,
    0x10, 0x50, 0x50, 0x92, 0x26, 0x46, 0x84, 0x0C, 0x18, 0xF0, 0xC0, 0x00,
    0x00, 0x81, 0x00, 0x08, 0x08, 0x08, 0x08, 0x00, 0x3C, 0x66, 0xC3, 0x81,
    0x81, 0xC3, 0x66, 0x3C, 0x01, 0x06, 0x00, 0x0F, 0x00, 0x00, 0x81, 0x00,
    0x00, 0x03, 0x0F, 0x18, 0x30, 0x24, 0x62, 0x61, 0x40, 0x00, 0x00, 0x1E,
    0x00, 0x00, 0x00, 0x40, 0x61, 0x62, 0x24, 0x30, 0x18, 0x0F, 0x03, 0x00};
static icon_t icon_lighter_24_24 = {icon_data_lighter_24_24, 24, 24, NULL};

static uint8_t
    icon_data_lighter_32_32[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                 0x00, 0x20, 0x30, 0x38, 0x18, 0x1C, 0x0C,
                                 0x0C, 0x04, 0x84, 0x8C, 0x8C, 0x9C, 0x18,
                                 0x38, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00,
                                 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0,
                                 0x7C, 0x1E, 0x03, 0x00, 0x80, 0x80, 0x82,
                                 0x04, 0x08, 0xC0, 0x20, 0x10, 0x12, 0x12,
                                 0x16, 0x2C, 0xC9, 0x11, 0x73, 0xC6, 0x1C,
                                 0x70, 0xC0, 0x03, 0x1E, 0x7C, 0xF0, 0x00,
                                 0x00, 0x00, 0x00, 0x0F, 0x3E, 0x78, 0xE0,
                                 0x00, 0x00, 0x00, 0x40, 0x20, 0x10, 0x03,
                                 0x04, 0x08, 0xE8, 0x08, 0x08, 0x04, 0x03,
                                 0x10, 0x20, 0x41, 0x07, 0x00, 0x01, 0xC0,
                                 0x78, 0x3E, 0x0F, 0x00, 0x00, 0x00, 0x00,
                                 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
                                 0x0C, 0x18, 0x18, 0x38, 0x30, 0x30, 0x20,
                                 0x20, 0x30, 0x30, 0x38, 0x18, 0x18, 0x0C,
                                 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                 0x00, 0x00};

static icon_t icon_lighter_32_32 = {icon_data_lighter_32_32, 32, 32, NULL};

extern MENU_TYP lightmeter;

int  lightmeter_init(void);
int  lightmeter_uninit(void);
void lightmeter_task(void);

#endif
