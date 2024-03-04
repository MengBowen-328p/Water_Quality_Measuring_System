#include "GUI.h"

TFT_eSPI tft(320,240);
/*Display Flush Callback*/
void Screen::my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);
    tft.startWrite();                                        //使能写功能
    tft.setAddrWindow(area->x1, area->y1, w, h);             //设置填充区域
    tft.pushColors((uint16_t *)&color_p->full, w * h, true); //写入颜色缓存和缓存大小
    tft.endWrite();                                          //关闭写功能

    lv_disp_flush_ready(disp); //调用区域填充颜色函数
}

void Screen::initDisplay(void)
{
    tft.init();
    tft.setRotation(1);
    tft.fillScreen(TFT_WHITE);
    lv_init();
    lv_disp_draw_buf_init(&draw_buf,buf,NULL,TFT_WIDTH*10);
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = TFT_WIDTH;
    disp_drv.ver_res = TFT_HEIGHT;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register(&disp_drv);

}

void Screen::initGUI(void)
{
    setup_ui(&guider_ui);
    events_init(&guider_ui);
}



void Screen::routine(uint8_t delay_time) {
    lv_timer_handler(); /* let the GUI do its work */
    delay(delay_time);
}




