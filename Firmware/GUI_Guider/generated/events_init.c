/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void Home_Page_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Ca_Page, guider_ui.Ca_Page_del, &guider_ui.Home_Page_del, setup_scr_Ca_Page, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_Home_Page(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Home_Page_btn_1, Home_Page_btn_1_event_handler, LV_EVENT_ALL, NULL);
}
static void Ca_Page_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Home_Page, guider_ui.Home_Page_del, &guider_ui.Ca_Page_del, setup_scr_Home_Page, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
		break;
	}
	default:
		break;
	}
}
static void Ca_Page_btn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Ca_History_Page, guider_ui.Ca_History_Page_del, &guider_ui.Ca_Page_del, setup_scr_Ca_History_Page, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void Ca_Page_btn_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Ca_Measure_Page, guider_ui.Ca_Measure_Page_del, &guider_ui.Ca_Page_del, setup_scr_Ca_Measure_Page, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_Ca_Page(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Ca_Page_btn_1, Ca_Page_btn_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->Ca_Page_btn_2, Ca_Page_btn_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->Ca_Page_btn_3, Ca_Page_btn_3_event_handler, LV_EVENT_ALL, NULL);
}
static void Ca_History_Page_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Ca_Page, guider_ui.Ca_Page_del, &guider_ui.Ca_History_Page_del, setup_scr_Ca_Page, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_Ca_History_Page(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Ca_History_Page_btn_1, Ca_History_Page_btn_1_event_handler, LV_EVENT_ALL, NULL);
}
static void Ca_Measure_Page_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.Ca_Page, guider_ui.Ca_Page_del, &guider_ui.Ca_Measure_Page_del, setup_scr_Ca_Page, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_Ca_Measure_Page(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Ca_Measure_Page_btn_1, Ca_Measure_Page_btn_1_event_handler, LV_EVENT_ALL, NULL);
}

void events_init(lv_ui *ui)
{

}
