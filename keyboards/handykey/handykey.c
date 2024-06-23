#include "quantum.h"

bool encoder_update_kb(uint8_t index, bool clockwise) {
    //if (!encoder_update_user(index, clockwise)) {
    //  return false; /* Don't process further events if user function exists and returns false */
    //}
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}

void keyboard_post_init_kb(void) {
    default_layer_state_set_kb(0);
}

layer_state_t default_layer_state_set_kb(layer_state_t state) {
    rgblight_sethsv((get_highest_layer(state)*45) & 0xFF, rgblight_get_sat(), rgblight_get_val());
    return state;
}

