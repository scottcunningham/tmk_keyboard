#include "keymap_scott.h"

#define KEYMAP_60( \
    K4A, K4B, K4C, K4D, K4E, K4F, K4G, K4H, K4I, K4J, K4K, K4L, K4M, K4N, K4O,\
    K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L, K3M, K3N,\
    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L, K2M, K2N,\
    K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L, K1O, K1M,\
    K0A, K0B, K0C,      K0G,      K0I,      K0J,      K0M, K0L, K0N, K0O, K0P\
) { \
  { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO}, \
  { KC_##K4A, KC_##K4B, KC_##K4C, KC_##K4D, KC_##K4E, KC_##K4F, KC_##K4G, KC_##K4H, KC_##K4I, KC_##K4J, KC_##K4K, KC_##K4L, KC_##K4M, KC_##K4N, KC_##K4O, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO}, \
  { KC_##K3A, KC_##K3B, KC_##K3C, KC_##K3D, KC_##K3E, KC_##K3F, KC_##K3G, KC_##K3H, KC_##K3I, KC_##K3J, KC_##K3K, KC_##K3L, KC_##K3M, KC_##K3N, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO}, \
  { KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D, KC_##K2E, KC_##K2F, KC_##K2G, KC_##K2H, KC_##K2I, KC_##K2J, KC_##K2K, KC_##K2L, KC_##K2M, KC_##K2N, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO}, \
  { KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D, KC_##K1E, KC_##K1F, KC_##K1G, KC_##K1H, KC_##K1I, KC_##K1J, KC_##K1K, KC_##K1L, KC_##K1M, KC_NO,    KC_##K1O, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO}, \
  { KC_##K0A, KC_##K0B, KC_##K0C, KC_NO,    KC_NO,    KC_NO,    KC_##K0G, KC_NO,    KC_##K0I, KC_##K0J, KC_NO,    KC_##K0L, KC_##K0M, KC_##K0N, KC_##K0O, KC_##K0P, KC_NO,    KC_NO,    KC_NO,    KC_NO}  \
}

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
    [0] = KEYMAP_60(
      ESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSLS, GRV,
      TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSPC,
      LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,  NO, ENT,
      LSFT,  NO,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,RSFT, FN0,
      LCTL,LALT,LGUI,       NO,      SPC,       NO,       NO,RGUI,  NO,RALT,RCTL
    ),
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
    [1] = KEYMAP_60(
        GRV,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, INS, DEL,
        GRV,FN1,FN2,FN3,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,  UP,TRNS,TRNS,
        TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,LEFT,RGHT,TRNS,TRNS,
        TRNS,TRNS,MPLY,MPRV,MNXT,MSTP,TRNS,TRNS,TRNS,END ,PGDN,DOWN,TRNS,TRNS,
        TRNS,TRNS,TRNS,     TRNS,     TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS
    ),
 };

enum ActionId {
  ACTION_RGB_OFF,
  ACTION_RGB_ON,
  ACTION_RGB_CHANGE_MODE,
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  switch (id) {
    case ACTION_RGB_OFF:
      rgb_off();
      break;
    case ACTION_RGB_ON:
      rgb_on();
      break;
    case ACTION_RGB_CHANGE_MODE:
      rgb_change_mode();
      break;
    default:
      break;
  }
}

const action_t fn_actions[] PROGMEM = {
  [0]  = ACTION_LAYER_MOMENTARY(1),
  [1]  = ACTION_FUNCTION(ACTION_RGB_OFF),
  [2]  = ACTION_FUNCTION(ACTION_RGB_ON),
  [3]  = ACTION_FUNCTION(ACTION_RGB_CHANGE_MODE),
};
