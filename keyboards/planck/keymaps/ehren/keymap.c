#include "planck.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define _COLEMAK 0

#define _CAPS 4

#define _RAISE 6
#define _LOWER 7

#define CLAP 0

const uint32_t PROGMEM unicode_map[] = {
  [CLAP] = 0x1F44F
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_COLEMAK] = {
  {KC_TAB  , KC_Q    , KC_W    , KC_F    , KC_P       , KC_G   , KC_J   , KC_L       , KC_U    , KC_Y    , KC_SCLN , KC_BSPC} ,
  {KC_ESC  , KC_A    , KC_R    , KC_S    , KC_T       , KC_D   , KC_H   , KC_N       , KC_E    , KC_I    , KC_O    , KC_QUOT} ,
  {KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V       , KC_B   , KC_K   , KC_M       , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT} ,
  {_______ , KC_LCTL , KC_LALT , KC_LGUI , MO(_LOWER) , KC_ENT , KC_SPC , MO(_RAISE) , KC_RGUI , KC_RALT , KC_RCTL , TG(_CAPS)}
},

[_LOWER] = {
  {KC_TILD , KC_EXLM , KC_AT   , KC_HASH , KC_DLR  , KC_PERC , KC_CIRC , KC_AMPR , KC_ASTR , KC_LPRN , KC_RPRN , KC_BSPC} ,
  {KC_DEL  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_UNDS , KC_PLUS , KC_LCBR , KC_RCBR , KC_PIPE} ,
  {_______ , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , KC_MNXT , KC_VOLD , KC_VOLU , KC_MPLY , _______} ,
  {_______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______}
},

[_RAISE] = {
  {KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_BSPC} ,
  {KC_DEL  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_MINS , KC_EQL  , KC_LBRC , KC_RBRC , KC_BSLS} ,
  {_______ , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , _______} ,
  {_______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______}
},

[_CAPS] = {
  {KC_TAB  , S(KC_Q) , S(KC_W) , S(KC_F) , S(KC_P)    , S(KC_G) , S(KC_J) , S(KC_L)    , S(KC_U) , S(KC_Y) , KC_SCLN , KC_BSPC} ,
  {KC_ESC  , S(KC_A) , S(KC_R) , S(KC_S) , S(KC_T)    , S(KC_D) , S(KC_H) , S(KC_N)    , S(KC_E) , S(KC_I) , S(KC_O) , KC_QUOT} ,
  {KC_LSFT , S(KC_Z) , S(KC_X) , S(KC_C) , S(KC_V)    , S(KC_B) , S(KC_K) , S(KC_M)    , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT} ,
  {_______ , KC_LCTL , KC_LALT , KC_LGUI , MO(_LOWER) , KC_ENT  , X(CLAP) , MO(_RAISE) , KC_RGUI , KC_RALT , KC_RCTL , _______}
}

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  switch(id) {
    case 1:
      if (record->event.pressed) {
        layer_on(1);
      } else {
        layer_off(1);
      }
      break;
    case 2:
      if (record->event.pressed) {
        layer_on(2);
      } else {
        layer_off(2);
      }
      break;
  }
  return MACRO_NONE;
};
