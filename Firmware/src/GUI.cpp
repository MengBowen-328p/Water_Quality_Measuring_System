//
// Created by 孟博文 on 2024/1/11.
//

#include "GUI.h"

static lv_disp_draw_buf_t disp_buf;
static lv_color_t buf[LV_HOR_RES_MAX * 10];

TFT_eSPI tft = TFT_eSPI();  //初始化TFT屏幕对象



void my_print(lv_log_level_t level, const char* file, uint32_t line, const char* fun, const char* dsc)
{
    Serial.printf("%s@%d %s->%s\r\n", file, line, fun, dsc);
    Serial.flush();
}

void my_disp_flush(lv_disp_drv_t* disp, const lv_area_t* area, lv_color_t* color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

    tft.startWrite();
    tft.setAddrWindow(area->x1, area->y1, w, h);
    tft.pushColors(&color_p->full, w * h, true);
    tft.endWrite();

    lv_disp_flush_ready(disp);
}

void Display::initGUI(void)
{
    tft.begin();
    tft.setRotation(0);
    lv_disp_draw_buf_init(&disp_buf,buf,NULL,LV_HOR_RES_MAX * 10);

    /*Init the LVGL*/
    lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.hor_res = 240;
    disp_drv.ver_res = 240;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &disp_buf;
    lv_disp_drv_register(&disp_drv);
}

void Display::showMainMenu(void)
{
    lv_obj_set_style_bg_color(lv_scr_act(), lv_color_hex(0x003a57),LV_PART_MAIN);
    lv_obj_t  * hello_label = lv_label_create(lv_scr_act());
    lv_label_set_text(hello_label,"Hello World!");
    lv_obj_set_style_text_color(lv_scr_act(), lv_color_hex(0x000000),LV_PART_MAIN);
    lv_obj_align(hello_label,LV_ALIGN_CENTER,0,0);
}


void Display::routine(void)
{
    lv_task_handler();
}