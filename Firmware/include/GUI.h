//
// Created by 孟博文 on 2024/1/11.
//

#ifndef FIRMWARE_GUI_H
#define FIRMWARE_GUI_H
#include <TFT_eSPI.h>
#include <lvgl.h>

class Display
{
public:
    void showMainMenu(void);
    void routine(void);
    void initGUI(void);
};
void my_disp_flush(lv_disp_drv_t* disp, const lv_area_t* area, lv_color_t* color_p);
void my_print(lv_log_level_t level, const char* file, uint32_t line, const char* fun, const char* dsc);
#endif //FIRMWARE_GUI_H
