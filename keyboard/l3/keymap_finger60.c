#include "keymap_finger60.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  Bspc |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]| \   |
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|Fn3|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn |
     * |-----------------------------------------------------------|
     * |LCtrl|LGui|Alt|      Space             |Alt |RGui|App |RCtl|
     * `-----------------------------------------------------------'
     */
  KEYMAP_FINGER60(
      ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,
      TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,    
      LCTL, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,
      LSFT, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN0,
      LCTL,LGUI,LALT,               SPC,                     RALT,RGUI,APP,RCTL),
    /* 1: HHKB Fn layer
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Del    |
     * |-----------------------------------------------------------|
     * |` |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |INS  |      |
     * |-----------------------------------------------------------|
     * |Ctrl  |VoD|VoU|Mut|LED1|  |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |LED2|  +|  -|End|PgD|Dow|     |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
  KEYMAP_FINGER60(
      ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,DEL,  
      GRV,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,UP,  INS,TRNS,
      TRNS,VOLD,VOLU,MUTE,FN1,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT, PENT,
      TRNS,TRNS,TRNS,TRNS,TRNS,FN2,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,
      TRNS,TRNS,TRNS,               TRNS,                     TRNS,TRNS,TRNS,TRNS)
 };

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  switch (id) {
    case 1:
      led_change_mode();
      break;
    case 2:
      rgb_change_mode();
      break;
    default:
      break;
  }
}

enum LayerId {
  LAYER_QWERTY,
  LAYER_PINKYFN,
};

const action_t fn_actions[] PROGMEM = {
  [0]  = ACTION_LAYER_MOMENTARY(1),
  [1]  = ACTION_BACKLIGHT_LEVEL(BACKLIGHT_SWITCH),
  [2]  = ACTION_BACKLIGHT_LEVEL(BACKLIGHT_PCB)
};
