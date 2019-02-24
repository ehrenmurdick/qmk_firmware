#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _COLEMAK 0
#define _LOWER 1
#define _RAISE 2
#define _FLIP 16

enum custom_keycodes {
  COLEMAK = SAFE_RANGE
};

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define FLIP   MO(_FLIP)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_COLEMAK] = LAYOUT_ortho_4x12( \
  KC_TAB  , KC_Q    , KC_W    , KC_F    , KC_P       , KC_G   , KC_J   , KC_L       , KC_U    , KC_Y    , KC_SCLN , KC_BSPC , \
  KC_ESC  , KC_A    , KC_R    , KC_S    , KC_T       , KC_D   , KC_H   , KC_N       , KC_E    , KC_I    , KC_O    , KC_QUOT , \
  KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V       , KC_B   , KC_K   , KC_M       , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT , \
  FLIP  , KC_LCTL , KC_LALT , KC_LGUI , MO(_LOWER) , KC_ENT , KC_SPC , MO(_RAISE) , KC_RGUI , KC_RALT , KC_RCTL , KC_CLCK   \
),

[_LOWER] = LAYOUT_ortho_4x12( \
  KC_TILD , KC_EXLM , KC_AT   , KC_HASH , KC_DLR  , KC_PERC , KC_CIRC , KC_AMPR , KC_ASTR , KC_LPRN , KC_RPRN , KC_BSPC , \
  KC_DEL  , _______ , _______ , _______ , KC_INS  , RESET   , _______ , KC_UNDS , KC_PLUS , KC_LCBR , KC_RCBR , KC_PIPE , \
  _______ , KC_HOME , KC_PGUP , KC_PGDN , KC_END  , _______ , _______ , KC_MNXT , KC_VOLD , KC_VOLU , KC_MUTE , _______ , \
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______   \

),

[_RAISE] = LAYOUT_ortho_4x12( \
  KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_BSPC , \
  KC_DEL  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_MINS , KC_EQL  , KC_LBRC , KC_RBRC , KC_BSLS , \
  _______ , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , _______ , \
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______   \
),

[_FLIP] = LAYOUT_ortho_4x12( \
  KC_BSPC , KC_SCLN , KC_Y    , KC_U    , KC_L       , KC_J   , KC_G   , KC_P       , KC_F    , KC_W    , KC_Q    , KC_TAB      , \
  KC_QUOT , KC_O    , KC_I    , KC_E    , KC_N       , KC_H   , KC_D   , KC_T       , KC_S    , KC_R    , KC_A    , KC_ESC      , \
  KC_RSFT , KC_SLSH , KC_DOT  , KC_COMM , KC_M       , KC_K   , KC_B   , KC_V       , KC_C    , KC_X    , KC_Z    , KC_LSFT     , \
  _______ , KC_RCTL , KC_RALT , KC_RGUI , MO(_RAISE) , KC_SPC , KC_ENT , MO(_RAISE) , KC_LGUI , KC_LALT , KC_LCTL , _______   \
)

};
