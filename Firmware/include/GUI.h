#ifndef __GUI_H
#define __GUI_H

#include "TFT_eSPI.h"
#include "lvgl.h"
#include "lv_conf.h"

#define TFT_HOR_RES   320
#define TFT_VER_RES   240
#define DRAW_BUF_SIZE (TFT_HOR_RES * TFT_VER_RES / 10 * (LV_COLOR_DEPTH / 8))

        static lv_disp_draw_buf_t draw_buf;    //定义显示器变量
        static lv_color_t buf[TFT_VER_RES * 10]; //定义刷新缓存
        uint32_t draw_buf[DRAW_BUF_SIZE / 4];



class Screen
{
    public:
        void initDisplay(void);
        void showMainMenu(void);
    private:
};

void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p);

#endif