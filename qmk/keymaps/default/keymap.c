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
        KC_LABK, KC_LCBR, KC_LBRC, KC_LPRN, KC_SLSH,   KC_MINS, KC_ASTR, KC_PERC, _______, _______,
        KC_HASH,  KC_DLR, KC_BSLS, KC_EXLM, KC_PIPE,  KC_TILDE,   KC_AT, KC_AMPR, _______,
                          KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [2] = LAYOUT_split_3x5_3(
        KC_PLUS,    KC_7,    KC_8,    KC_9, _______,   _______, _______, _______, _______, _______,
           KC_0,    KC_4,    KC_5,    KC_6,  KC_DOT,   _______, _______, _______, _______, _______,
        KC_MINS,    KC_1,    KC_2,    KC_3, KC_COMM,   _______, _______, _______, _______, _______,
                          KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT_split_3x5_3(
        _______,  WINLFT,   KC_UP,  WINRHT, _______,   _______, _______, _______, _______, _______,
        KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT,  KC_END,   _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______,
                          KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [4] = LAYOUT_split_3x5_3(
        KC_NO, KC_F7, KC_F8, KC_F9, KC_F10,  KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_F1, KC_F2, KC_F3, KC_F11,  KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_F4, KC_F5, KC_F6, KC_F12,  KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
                      KC_TRNS, KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS
    ),
};

enum combos {
    TW_TAB,
    YK_NT,
    CK_LT,
    HQ_MINS,
    FP_ESC,
    YW_LAUNCH,
    LC_QUIT,
    CY_COLON,
    CU_SCLN,
    QD_BTN2,
};

const uint16_t PROGMEM tab_combo[] = {KC_W, KC_T, COMBO_END};
const uint16_t PROGMEM next_tab_combo[] = {KC_Y, KC_K, COMBO_END};
const uint16_t PROGMEM last_tab_combo[] = {KC_C, KC_K, COMBO_END};
const uint16_t PROGMEM minus_combo[] = {KC_H, KC_QUOT, COMBO_END};
const uint16_t PROGMEM escape_combo[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM launch_combo[] = {KC_Y, KC_W, COMBO_END};
const uint16_t PROGMEM quit_combo[] = {KC_L, KC_COMM, COMBO_END};
const uint16_t PROGMEM colon_combo[] = {KC_C, KC_Y, COMBO_END};
const uint16_t PROGMEM semicolon_combo[] = {KC_COMM, KC_U, COMBO_END};
const uint16_t PROGMEM button_2_combo[] = {KC_QUOT, KC_DOT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [TW_TAB]    = COMBO(tab_combo, KC_TAB),
    [YK_NT]     = COMBO(next_tab_combo, C(KC_TAB)),
    [CK_LT]     = COMBO(last_tab_combo, C(S(KC_TAB))),
    [HQ_MINS]   = COMBO(minus_combo, KC_MINS),
    [FP_ESC]    = COMBO(escape_combo, KC_ESC),
    [YW_LAUNCH] = COMBO(launch_combo, G(KC_SLSH)),
    [LC_QUIT]   = COMBO(quit_combo, G(KC_Q)),
    [CY_COLON]  = COMBO(colon_combo, S(KC_SCLN)),
    [CU_SCLN]   = COMBO(semicolon_combo, KC_SCLN),
    [QD_BTN2]   = COMBO(button_2_combo, KC_BTN2),
};
