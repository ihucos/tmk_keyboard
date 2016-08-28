#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: ANSI qwerty */
    KEYMAP(ESC,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0, MINS,  EQL,   NO, BSPC, \
           TAB,    Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P, LBRC, RBRC, BSLS,       \
          LCTL,    A,    S,    D,    F,    G,    H,    J,    K,    L, SCLN, QUOT,   NO, ENT ,       \
          LSFT,   NO,    Z,    X,    C,    V,    B,    N,    M, COMM,  DOT, SLSH,   NO, RSFT,   NO, \
          FN0, LGUI, LALT,                    SPC,                   RALT,  RGUI,  APP, RCTL),

    KEYMAP(
        SLEP,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12, TRNS, POWER, \
        TRNS, TRNS, TRNS, END, TRNS, TRNS, TRNS, TRNS, TAB, TRNS, UP, TRNS, TRNS, TRNS,       \
	TRNS, HOME, TRNS, DEL, RIGHT, TRNS, BSPC, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       \
	TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, LEFT, DOWN, ENT, TRNS, TRNS, TRNS, TRNS, UP, TRNS, \
        TRNS, VOLD, VOLU,                   TRNS,                   TRNS, LEFT, DOWN, RIGHT),
};

const uint16_t PROGMEM fn_actions[] = {
	[0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
};
