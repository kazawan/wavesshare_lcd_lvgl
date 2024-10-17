#ifndef TEST_H
#define TEST_H
#include "lvgl.h"

void transition_list()
{
    // define event

    // define obj
    lv_obj_t *scr = lv_obj_create(NULL);
    lv_obj_t *list = lv_list_create(scr);

    // define transition object
    static lv_style_transition_dsc_t list_item_trans;
    static const lv_style_prop_t list_item_trans_props[] = {
        LV_STYLE_PAD_TOP,
        LV_STYLE_PAD_BOTTOM,
        LV_STYLE_BG_COLOR,
        LV_STYLE_WIDTH,
        LV_STYLE_HEIGHT,
        LV_STYLE_TRANSLATE_X,
        LV_STYLE_OPA,

    };
    lv_style_transition_dsc_init(&list_item_trans, list_item_trans_props, lv_anim_path_ease_in_out, 300, 0, NULL);

    // define default style
    static lv_style_t list_item_style_default;
    lv_style_init(&list_item_style_default);
    lv_style_set_bg_color(&list_item_style_default, lv_color_hex(0x000000));
    lv_style_set_text_color(&list_item_style_default, lv_color_hex(0xffffff));
    lv_style_set_size(&list_item_style_default, 30);
    lv_style_set_pad_top(&list_item_style_default, 10);
    lv_style_set_pad_bottom(&list_item_style_default, 10);
    lv_style_set_translate_x(&list_item_style_default, -120);
    lv_style_set_opa(&list_item_style_default, 100);

    // define transition style
    static lv_style_t list_item_focused_style;
    lv_style_init(&list_item_focused_style);
    lv_style_set_transition(&list_item_focused_style, &list_item_trans);
    lv_style_set_bg_color(&list_item_focused_style, lv_color_hex(0x00ff00));
    lv_style_set_text_color(&list_item_focused_style, lv_color_hex(0x000000));
    lv_style_set_pad_top(&list_item_focused_style, 30);
    lv_style_set_pad_bottom(&list_item_focused_style, 30);
    lv_style_set_translate_x(&list_item_focused_style, 0);
    lv_style_set_opa(&list_item_focused_style, 255);

    

    lv_obj_set_scrollbar_mode(scr, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_snap_y(list, LV_SCROLL_SNAP_CENTER);

    lv_obj_set_size(list, 170, 380);
    lv_obj_set_x(list, 0);
    lv_obj_set_y(list, -60);
    lv_obj_set_scroll_snap_y(list, LV_SCROLL_SNAP_CENTER);
    lv_obj_set_scrollbar_mode(list, LV_SCROLLBAR_MODE_OFF);

    // btn
    lv_obj_t *btn1 = lv_list_add_btn(list, LV_SYMBOL_OK, "Button 1");
    lv_obj_add_style(btn1, &list_item_style_default, 0);
    lv_obj_add_style(btn1, &list_item_focused_style, LV_STATE_FOCUSED);

    lv_obj_t *btn2 = lv_list_add_btn(list, LV_SYMBOL_CLOSE, "Button 2");
    lv_obj_add_style(btn2, &list_item_style_default, 0);
    lv_obj_add_style(btn2, &list_item_focused_style, LV_STATE_FOCUSED);

    lv_obj_t *btn3 = lv_list_add_btn(list, LV_SYMBOL_EDIT, "Button 3");
    lv_obj_add_style(btn3, &list_item_style_default, 0);
    lv_obj_add_style(btn3, &list_item_focused_style, LV_STATE_FOCUSED);

    lv_obj_t *btn4 = lv_list_add_btn(list, LV_SYMBOL_SAVE, "Button 4");
    lv_obj_add_style(btn4, &list_item_style_default, 0);
    lv_obj_add_style(btn4, &list_item_focused_style, LV_STATE_FOCUSED);

    lv_obj_t *btn5 = lv_list_add_btn(list, LV_SYMBOL_BELL, "Button 5");
    lv_obj_add_style(btn5, &list_item_style_default, 0);
    lv_obj_add_style(btn5, &list_item_focused_style, LV_STATE_FOCUSED);

    lv_obj_t *btn6 = lv_list_add_btn(list, LV_SYMBOL_BATTERY_FULL, "Button 6");
    lv_obj_add_style(btn6, &list_item_style_default, 0);
    lv_obj_add_style(btn6, &list_item_focused_style, LV_STATE_FOCUSED);

    lv_obj_t *btn7 = lv_list_add_btn(list, LV_SYMBOL_BLUETOOTH, "Button 7");
    lv_obj_add_style(btn7, &list_item_style_default, 0);
    lv_obj_add_style(btn7, &list_item_focused_style, LV_STATE_FOCUSED);

    lv_obj_t *btn8 = lv_list_add_btn(list, LV_SYMBOL_GPS, "Button 8");
    lv_obj_add_style(btn8, &list_item_style_default, 0);
    lv_obj_add_style(btn8, &list_item_focused_style, LV_STATE_FOCUSED);

    lv_obj_t *btn9 = lv_list_add_btn(list, LV_SYMBOL_OK, "Button 9");
    lv_obj_add_style(btn9, &list_item_style_default, 0);
    lv_obj_add_style(btn9, &list_item_focused_style, LV_STATE_FOCUSED);

    lv_obj_t *btn10 = lv_list_add_btn(list, LV_SYMBOL_CLOSE, "Button 10");
    lv_obj_add_style(btn10, &list_item_style_default, 0);
    lv_obj_add_style(btn10, &list_item_focused_style, LV_STATE_FOCUSED);

    lv_obj_t *btn11 = lv_list_add_btn(list, LV_SYMBOL_EDIT, "Button 11");
    lv_obj_add_style(btn11, &list_item_style_default, 0);
    lv_obj_add_style(btn11, &list_item_focused_style, LV_STATE_FOCUSED);

    lv_obj_t *btn12 = lv_list_add_btn(list, LV_SYMBOL_SAVE, "Button 12");
    lv_obj_add_style(btn12, &list_item_style_default, 0);
    lv_obj_add_style(btn12, &list_item_focused_style, LV_STATE_FOCUSED);

    lv_obj_t *btn13 = lv_list_add_btn(list, LV_SYMBOL_BELL, "Button 13");
    lv_obj_add_style(btn13, &list_item_style_default, 0);
    lv_obj_add_style(btn13, &list_item_focused_style, LV_STATE_FOCUSED);

    lv_obj_t *btn14 = lv_list_add_btn(list, LV_SYMBOL_BATTERY_FULL, "Button 14");
    lv_obj_add_style(btn14, &list_item_style_default, 0);
    lv_obj_add_style(btn14, &list_item_focused_style, LV_STATE_FOCUSED);

    // main
    lv_scr_load(scr);
}

void screen_list()
{
    lv_obj_t *scr = lv_obj_create(NULL);
    lv_obj_set_scrollbar_mode(scr, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_snap_y(scr, LV_SCROLL_SNAP_CENTER);

    // define style
    static lv_style_t style_btn_focused;
    lv_style_init(&style_btn_focused);
    lv_style_set_bg_color(&style_btn_focused, lv_color_hex(0x00ff00));

    // group
    lv_group_t *btn_group = lv_group_create();

    // define btn

    lv_obj_t *btn1 = lv_btn_create(scr);
    lv_obj_t *label1 = lv_label_create(btn1);
    lv_label_set_text(label1, "Button 1");
    lv_obj_set_width(btn1, 170);
    lv_obj_set_height(btn1, 50);
    lv_obj_set_x(btn1, 0);
    lv_obj_set_y(btn1, 0);
    lv_obj_add_style(btn1, &style_btn_focused, LV_STATE_FOCUSED);

    lv_obj_t *btn2 = lv_btn_create(scr);
    lv_obj_t *label2 = lv_label_create(btn2);
    lv_label_set_text(label2, "Button 2");
    lv_obj_set_width(btn2, 170);
    lv_obj_set_height(btn2, 50);
    lv_obj_set_x(btn2, 0);
    lv_obj_set_y(btn2, 150);

    lv_obj_add_style(btn2, &style_btn_focused, LV_STATE_FOCUSED);

    lv_obj_t *btn3 = lv_btn_create(scr);
    lv_obj_t *label3 = lv_label_create(btn3);
    lv_label_set_text(label3, "Button 3");
    lv_obj_set_width(btn3, 170);
    lv_obj_set_height(btn3, 50);
    lv_obj_set_x(btn3, 0);
    lv_obj_set_y(btn3, 300);
    lv_obj_add_style(btn3, &style_btn_focused, LV_STATE_FOCUSED);

    lv_obj_t *btn4 = lv_btn_create(scr);
    lv_obj_t *label4 = lv_label_create(btn4);
    lv_label_set_text(label4, "Button 4");
    lv_obj_set_width(btn4, 170);
    lv_obj_set_height(btn4, 50);
    lv_obj_set_x(btn4, 0);
    lv_obj_set_y(btn4, 450);
    lv_obj_add_style(btn4, &style_btn_focused, LV_STATE_FOCUSED);

    lv_group_add_obj(btn_group, btn1);
    lv_group_add_obj(btn_group, btn2);
    lv_group_add_obj(btn_group, btn3);
    lv_group_add_obj(btn_group, btn4);

    lv_group_focus_obj(btn3);

    lv_scr_load(scr);
}

#endif