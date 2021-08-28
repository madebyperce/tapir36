#include QMK_KEYBOARD_H

#define WINTAB LWIN_T(KC_TAB)
#define WINLFT LGUI(LSFT(KC_LEFT))
#define WINRHT LGUI(LSFT(KC_RGHT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_3x5_3(
        KC_Q,         KC_W,         KC_E,         KC_R,             KC_T,    KC_Y,    KC_U,           KC_I,         KC_O,         KC_P,
        LSFT_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LT(MO(4), KC_F),  KC_G,    KC_H,    LT(MO(3), KC_J), RCTL_T(KC_K), RALT_T(KC_L), RSFT_T(KC_QUOT),
        KC_Z,         KC_X,         KC_C,         LGUI_T(KC_V),     KC_B,    KC_N,    RGUI_T(KC_M),   KC_COMM,      KC_DOT,       KC_SLSH,
                                    WINTAB,       KC_SPC,          MO(1),   MO(2),          KC_ENT,   KC_BSPC
    ),

    [1] = LAYOUT_split_3x5_3(
        KC_RABK, KC_RCBR, KC_RBRC, KC_RPRN, KC_BSLS,   KC_UNDS, KC_CIRC, KC_QUOT, KC_DQUO, _______,
        KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, KC_SLSH,   KC_MINS, KC_ASTR, KC_PERC, KC_SCLN, _______,
        KC_HASH,  KC_DLR, KC_BSLS, KC_EXLM, KC_PIPE,  KC_TILDE,   KC_AT, KC_AMPR, KC_COLN, _______,
                          KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [2] = LAYOUT_split_3x5_3(
        KC_PLUS,    KC_7,    KC_8,    KC_9, _______,   _______, _______, _______, _______, _______,
           KC_0,    KC_4,    KC_5,    KC_6, KC_GRAVE,   _______, _______, _______, _______, _______,
        KC_MINS,    KC_1,    KC_2,    KC_3, KC_COMM,   _______, _______, _______, _______, _______,
                          KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT_split_3x5_3(
        _______,  WINLFT,   KC_UP,  WINRHT, _______,   _______, _______, _______, _______, _______,
        KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT,  KC_END,   _______, _______, _______, _______, _______,
        _______, C(KC_C), C(KC_X), C(KC_V), KC_PSCR,   _______, _______, _______, _______, _______,
                          KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [4] = LAYOUT_split_3x5_3(
        _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______,
                          KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

enum combos {
    RT_ESC,
    ENTBK_DEL,
    LPARAN,
    RPARAN,
};

const uint16_t PROGMEM escape_combo[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM launch_combo[] = {KC_ENT, KC_BSPC, COMBO_END};
const uint16_t PROGMEM lparan_combo[] = {KC_A, KC_COMM, COMBO_END};
const uint16_t PROGMEM rparan_combo[] = {KC_A, KC_DOT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [RT_ESC]    = COMBO(escape_combo, KC_ESC),
    [ENTBK_DEL] = COMBO(launch_combo, KC_DEL),
    [LPARAN] = COMBO(lparan_combo, KC_LPRN),
    [RPARAN] = COMBO(rparan_combo, KC_RPRN),
};
