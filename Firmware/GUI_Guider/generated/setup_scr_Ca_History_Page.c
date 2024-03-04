/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_Ca_History_Page(lv_ui *ui)
{
	//Write codes Ca_History_Page
	ui->Ca_History_Page = lv_obj_create(NULL);
	lv_obj_set_size(ui->Ca_History_Page, 320, 240);
	lv_obj_set_scrollbar_mode(ui->Ca_History_Page, LV_SCROLLBAR_MODE_OFF);

	//Write style for Ca_History_Page, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Ca_History_Page, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Ca_History_Page, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Ca_History_Page, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ca_History_Page_label_1
	ui->Ca_History_Page_label_1 = lv_label_create(ui->Ca_History_Page);
	lv_label_set_text(ui->Ca_History_Page_label_1, "History");
	lv_label_set_long_mode(ui->Ca_History_Page_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Ca_History_Page_label_1, 110, 104);
	lv_obj_set_size(ui->Ca_History_Page_label_1, 100, 32);

	//Write style for Ca_History_Page_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Ca_History_Page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Ca_History_Page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Ca_History_Page_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Ca_History_Page_label_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Ca_History_Page_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Ca_History_Page_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Ca_History_Page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Ca_History_Page_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Ca_History_Page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Ca_History_Page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Ca_History_Page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Ca_History_Page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Ca_History_Page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Ca_History_Page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Ca_History_Page_btn_1
	ui->Ca_History_Page_btn_1 = lv_btn_create(ui->Ca_History_Page);
	ui->Ca_History_Page_btn_1_label = lv_label_create(ui->Ca_History_Page_btn_1);
	lv_label_set_text(ui->Ca_History_Page_btn_1_label, "<Back");
	lv_label_set_long_mode(ui->Ca_History_Page_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Ca_History_Page_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Ca_History_Page_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->Ca_History_Page_btn_1, 0, 0);
	lv_obj_set_size(ui->Ca_History_Page_btn_1, 73, 38);

	//Write style for Ca_History_Page_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Ca_History_Page_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Ca_History_Page_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->Ca_History_Page_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Ca_History_Page_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Ca_History_Page_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Ca_History_Page_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Ca_History_Page_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Ca_History_Page_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->Ca_History_Page_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Ca_History_Page_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of Ca_History_Page.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->Ca_History_Page);

	//Init events for screen.
	events_init_Ca_History_Page(ui);
}
