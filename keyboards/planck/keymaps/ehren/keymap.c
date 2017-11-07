#include "planck.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define _COLEMAK 0
#define _RAISE 1
#define _LOWER 2
#define _TENKEY 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_COLEMAK] = {
  {KC_TAB  , KC_Q    , KC_W    , KC_F    , KC_P       , KC_G   , KC_J   , KC_L       , KC_U    , KC_Y    , KC_SCLN , KC_BSPC} ,
  {KC_ESC  , KC_A    , KC_R    , KC_S    , KC_T       , KC_D   , KC_H   , KC_N       , KC_E    , KC_I    , KC_O    , KC_QUOT} ,
  {KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V       , KC_B   , KC_K   , KC_M       , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT} ,
  {_______ , KC_LCTL , KC_LALT , KC_LGUI , MO(_LOWER) , KC_ENT , KC_SPC , MO(_RAISE) , KC_RGUI , KC_RALT , KC_RCTL , TG(_TENKEY)}
},

[_LOWER] = {
  {KC_TILD , KC_EXLM , KC_AT   , KC_HASH , KC_DLR  , KC_PERC , KC_CIRC , KC_AMPR , KC_ASTR , KC_LPRN , KC_RPRN , KC_BSPC} ,
  {KC_DEL  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_UNDS , KC_PLUS , KC_LCBR , KC_RCBR , KC_PIPE} ,
  {_______ , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , KC_MNXT , KC_VOLD , KC_VOLU , KC_MPLY , KC_LOCK} ,
  {_______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______}
},

[_RAISE] = {
  {KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_BSPC} ,
  {KC_DEL  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_MINS , KC_EQL  , KC_LBRC , KC_RBRC , KC_BSLS} ,
  {KC_LOCK , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , _______} ,
  {_______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______}
},

[_TENKEY] = {
  {_______ , _______ , _______ , _______ , _______ , _______ , _______ , KC_7 , KC_8   , KC_9   , _______ , _______} ,
  {_______ , _______ , _______ , _______ , _______ , _______ , _______ , KC_4 , KC_5   , KC_6   , _______ , _______} ,
  {_______ , _______ , _______ , _______ , _______ , _______ , _______ , KC_1 , KC_2   , KC_3   , _______ , _______} ,
  {_______ , _______ , _______ , _______ , _______ , _______ , _______ , KC_0 , KC_DOT , KC_ENT , _______ , _______}
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
