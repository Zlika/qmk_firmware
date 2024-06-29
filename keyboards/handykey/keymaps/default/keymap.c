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
        KC_ESCAPE, FR_TILD,  FR_HASH,       FR_PERC,        KC_BACKSPACE,
        KC_TAB,    FR_EURO,  FR_LBRC,       FR_RBRC,        KC_DELETE,
        FR_QUES,   FR_DOT,   FR_LCBR,       FR_RCBR,        KC_ENTER,
        FR_PIPE,   FR_BSLS,  FR_SLSH,       FR_AT,          DF(1),
        KC_NO,     KC_NO,    KC_NO,         KC_MS_BTN1,     KC_MS_BTN2
    ),
    // Keypad
    [1] = LAYOUT_ortho_5x5(
        FR_7,  FR_8,   FR_9,        KC_KP_SLASH,    KC_BACKSPACE,
        FR_4,  FR_5,   FR_6,        KC_KP_ASTERISK, KC_DELETE,
        FR_1,  FR_2,   FR_3,        KC_KP_MINUS,    KC_KP_ENTER,
        FR_0,  FR_DOT, KC_KP_EQUAL, KC_KP_PLUS,     DF(2),
        KC_NO, KC_NO,  KC_NO,       KC_MS_BTN1,     KC_MS_BTN2
    ),
    // Navigation
    [2] = LAYOUT_ortho_5x5(
        KC_HOME,     KC_UP,       KC_END,         KC_PAGE_UP,     KC_BACKSPACE,
        KC_LEFT,     KC_DOWN,     KC_RIGHT,       KC_PAGE_DOWN,   KC_DELETE,
        LCTL(FR_X),  LCTL(FR_C),  LCTL(FR_V),     LCTL(FR_Z),     KC_WWW_FAVORITES,
        KC_WWW_HOME, KC_WWW_BACK, KC_WWW_FORWARD, KC_WWW_REFRESH, DF(3),
        KC_NO,       KC_NO,       KC_NO,          KC_MS_BTN1,     KC_MS_BTN2
    ),
    // Media
    [3] = LAYOUT_ortho_5x5(
        KC_AUDIO_MUTE,     KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK,   KC_CALCULATOR, KC_BACKSPACE,
        KC_AUDIO_VOL_UP,   KC_MEDIA_STOP,       KC_MEDIA_PLAY_PAUSE,   KC_MAIL,       KC_DELETE,
        KC_AUDIO_VOL_DOWN, KC_MEDIA_REWIND,     KC_MEDIA_FAST_FORWARD, RGB_VAI,       KC_MY_COMPUTER,
        RGB_TOG,           KC_BRIGHTNESS_DOWN,  KC_BRIGHTNESS_UP,      RGB_VAD,       DF(0),
        KC_NO,             KC_NO,               KC_NO,                 KC_MS_BTN1,    KC_MS_BTN2
    )
};
