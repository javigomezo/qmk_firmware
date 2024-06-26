#include QMK_KEYBOARD_H

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LSFT_T(KC_D)
#define HOME_F LCTL_T(KC_F)

// Right-hand home row mods
#define HOME_J RCTL_T(KC_J)
#define HOME_K RSFT_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        QK_GESC,        KC_1,    KC_2,            KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,         KC_EQL,  KC_BSPC,
        KC_TAB,         KC_Q,    KC_W,            KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,         KC_RBRC, KC_BSLS,
        MO(1),          HOME_A,  HOME_S,          HOME_D,  HOME_F,  KC_G,    KC_H,    HOME_J,  HOME_K,  HOME_L,  HOME_SCLN, KC_QUOT,                  KC_ENT,
        KC_LSFT,                 KC_Z,            KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH), KC_UP,   LT(2, KC_DEL),
        KC_LCTL,        KC_LGUI, KC_LALT,                            KC_SPC,                   KC_RALT, TO(3),   KC_LEFT,         KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
        _______, _______, KC_UP,   _______, _______, _______, KC_CALC, _______, KC_INS,  _______,   KC_PSCR, KC_SCRL, _______, QK_BOOT,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP,   KC_END, _______,          EE_CLR,
        _______,          _______, _______, _______, _______, _______, NK_TOGG, _______, KC_NUBS, LSft(KC_NUBS),  _______, KC_VOLU, KC_MUTE,
        _______, _______, _______,                            KC_PAUS,                   _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
    ),
    [2] = LAYOUT(
        RGB_TOG, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
        _______, _______, RGB_HUI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,
        RGB_MOD, RGB_SAD, RGB_HUD, RGB_SAI, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        RGB_RMOD,         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_VAI, _______,
        _______, _______, _______,                            _______,                   _______, _______, RGB_SPD, RGB_VAD, RGB_SPI
    ),
    [3] = LAYOUT(
        QK_GESC,        KC_1,    KC_2,            KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,         KC_EQL,  KC_BSPC,
        KC_TAB,         KC_Q,    KC_W,            KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,         KC_RBRC, KC_BSLS,
        MO(1),          KC_A,    KC_S,            KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                  KC_ENT,
        KC_LSFT,                 KC_Z,            KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH), KC_UP,   KC_DEL,
        KC_LCTL,        KC_LGUI, KC_LALT,                            KC_SPC,                   KC_RALT, TO(0),   KC_LEFT,                  KC_DOWN, KC_RGHT
    ),
};
