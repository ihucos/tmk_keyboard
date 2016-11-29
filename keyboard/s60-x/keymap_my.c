#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: ANSI qwerty */
    KEYMAP(ESC,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0, MINS,  EQL,   NO, BSPC, \
           TAB,    Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P, LBRC, RBRC, BSLS,       \
          LCTL,    A,    S,    D,    F,    G,    H,    J,    K,    L, SCLN, QUOT,   NO, ENT ,       \
          FN1,   NO,    Z,    X,    C,    V,    B,    N,    M, COMM,  DOT, SLSH,   NO, FN2,   NO, \
          FN0, LALT, LCTL,                    SPC,                   RGUI,  LEFT,  DOWN, RIGHT),

    KEYMAP(
        GRAVE,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12, TRNS, POWER, \
        SLEP, TRNS, TRNS, END, TRNS, TRNS, TRNS, TRNS, TAB, TRNS, UP, TRNS, TRNS, TRNS,       \
	TRNS, HOME, TRNS, DEL, RIGHT, TRNS, BSPC, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       \
	TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, LEFT, DOWN, ENT, TRNS, TRNS, UP, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS,                   TRNS,                   LEFT, DOWN, RIGHT, TRNS),


    KEYMAP(
        GRAVE,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,  TRNS,  TRNS,  TRNS, TRNS, TRNS, \
        VOLU, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       \
	VOLD, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       \
	TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS,                   TRNS,                   TRNS, TRNS, TRNS, TRNS),

};


// enum macro_id {
//    TEST,
//};

const uint16_t PROGMEM fn_actions[] = {
	[0] = ACTION_LAYER_MOMENTARY(1),
	[1] = ACTION_LAYER_MODS(2, MOD_LSFT),
	[2] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_UP),
};

// const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
// {
//     keyevent_t event = record->event;
// 
//     switch (id) {
//         case TEST:
//             if (! event.pressed){
//                 return MACRO( I(0), T(G), T(I), T(T), T(SPC), T(S), T(T), T(A), T(T), T(U), T(S), T(SPC), T(MINS), T(S), T(ENT), END );
//             }
//     }
//     return MACRO_NONE;
// }

