// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "keymap_french.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │
     * └───┴───┴───┴───┴───┘
     */
     // Misc
    [0] = LAYOUT_ortho_5x5(
        KC_ESCAPE, KC_GRAVE, FR_HASH,       FR_LBRC,        FR_RBRC,
        KC_TAB,    FR_EURO,  KC_BACKSPACE,  KC_DELETE,      FR_PERC,
        FR_QUES,   FR_DOT,   KC_RIGHT_CTRL, KC_RIGHT_SHIFT, KC_SPACE,
        KC_CUT,    KC_COPY,  KC_PASTE,      FR_AT,          KC_ENTER,
        KC_NO,     KC_NO,    KC_NO,         DF(3),          DF(1)
    ),
    // Keypad
    [1] = LAYOUT_ortho_5x5(
        KC_KP_7, KC_KP_8,   KC_KP_9,     KC_KP_SLASH,    KC_BACKSPACE,
        KC_KP_4, KC_KP_5,   KC_KP_6,     KC_KP_ASTERISK, KC_DELETE,
        KC_KP_1, KC_KP_2,   KC_KP_3,     KC_KP_MINUS,    KC_SPACE,
        KC_KP_0, KC_KP_DOT, KC_KP_EQUAL, KC_KP_PLUS,     KC_KP_ENTER,
        KC_NO,   KC_NO,     KC_NO,       DF(0),          DF(2)
    ),
    // Navigation
    [2] = LAYOUT_ortho_5x5(
        KC_HOME, KC_UP,   KC_END,   KC_PAGE_UP,   KC_BACKSPACE,
        KC_LEFT, KC_B,    KC_RIGHT, KC_PAGE_DOWN, KC_DELETE,
        KC_WWW_FAVORITES, KC_DOWN, KC_MS_BTN1,    KC_MS_BTN2,        KC_SPACE,
        KC_WWW_HOME, KC_WWW_BACK, KC_WWW_FORWARD, KC_WWW_REFRESH, KC_KP_ENTER,
        KC_NO,   KC_NO,   KC_NO,    DF(1),        DF(3)
    ),
    // Media
    [3] = LAYOUT_ortho_5x5(
        KC_AUDIO_MUTE,     KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_NO,          KC_EXECUTE,
        KC_AUDIO_VOL_UP,   KC_MEDIA_STOP,       KC_MEDIA_PLAY_PAUSE, KC_MAIL,        KC_CALCULATOR,
        KC_AUDIO_VOL_DOWN, KC_MY_COMPUTER,      KC_WWW_SEARCH,       RGB_MODE_PLAIN, KC_RIGHT_CTRL,
        KC_MEDIA_REWIND,   KC_BRIGHTNESS_UP,    RGB_MODE_KNIGHT,     RGB_VAD,        RGB_VAI,
        KC_NO,    KC_NO,   KC_NO,    DF(2),     DF(0)
    )
};
