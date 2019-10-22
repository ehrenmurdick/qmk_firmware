#include QMK_KEYBOARD_H

// Layer shorthand
#define _CM 0 // colemack
#define _DF 1 // dwarf fortress
#define _LW 3 // lower
#define _RS 4 // raise
#define _FN 5 // function

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_CM] = LAYOUT_grid( /* COLEMAK */
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5  ,                  KC_6  , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS   , \
    KC_TAB , KC_Q   , KC_W   , KC_F   , KC_P   , KC_G  ,                  KC_J  , KC_L   , KC_U   , KC_Y   , KC_SCLN, KC_BSPC   , \
    KC_ESC , KC_A   , KC_R   , KC_S   , KC_T   , KC_D  ,                  KC_H  , KC_N   , KC_E   , KC_I   , KC_O   , KC_QUOT   , \
    KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B  ,                  KC_K  , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT   , \
    MO(_FN), KC_LCTL, KC_LALT, KC_LGUI, MO(_RS), KC_ENT,                  KC_SPC, MO(_LW), KC_RGUI, KC_RALT, KC_RCTL, MO(_FN)     \
  ),

  [_DF] = LAYOUT_grid(
    _______, _______, _______, _______, _______, _______,                  KC_PSLS, KC_PPLS, KC_PMNS, KC_PAST, _______, _______, \
    _______, _______, _______, _______, _______, _______,                  _______, KC_P7  , KC_P8  , KC_P9  , _______, _______, \
    _______, _______, _______, _______, _______, _______,                  _______, KC_P4  , KC_P5  , KC_P6  , KC_ESC , _______, \
    _______, _______, _______, _______, _______, _______,                  _______, KC_P1  , KC_P2  , KC_P3  , _______, _______, \
    _______, _______, _______, _______, _______, KC_SPC ,                  KC_PENT, KC_SPC , KC_P0  , _______, _______, _______  \
  ),

  [_RS] = LAYOUT_grid(
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______, \
    KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,                  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, \
    KC_DEL , _______, _______, _______, KC_INS , KC_NLCK,                  _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, \
    _______, KC_HOME, KC_PGUP, KC_PGDN, KC_END , _______,                  _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MUTE, _______, \
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______  \
  ),

  [_LW] = LAYOUT_grid(
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______, \
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                  KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC, \
    KC_DEL , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                  KC_F6  , KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_BSLS, \
    _______, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,                  KC_F12 , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, \
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______  \
  ),

  [_FN] = LAYOUT_grid(
    _______, RESET  , _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______,                  _______, TO(_CM), TO(_DF), _______, _______, _______, \
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______, _______  \
  ),
};
