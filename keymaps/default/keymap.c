#include QMK_KEYBOARD_H

enum layer_names {
    _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        RESET,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8
    )
};