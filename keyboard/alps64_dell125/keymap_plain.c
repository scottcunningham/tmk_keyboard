#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* 0: qwerty
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  Bsp  |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
     * |-----------------------------------------------------------|
     * |LCtrl |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |  Shft  |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|   Fn0    |
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |         Space         |App |Alt |Gui |Lock |
     * `-----------------------------------------------------------'
     */
    KEYMAP( \
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL,  BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,  \
        LSFT,    Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,  RFT,  \
        LCTL,LGUI,LALT,          SPC,                     RALT, RGUI,APP,FN0),
    /* 1: fn layer
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  Bsp  |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|PSc| Up|  ]|  \  |
     * |-----------------------------------------------------------|
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|Hom|PgU|Lft|Rgt|Enter   |
     * |-----------------------------------------------------------|
     * |  Shft  |  Z|  X|  C|  V|  B|  N|  M|End|PgD|Dwn|   Fn0    |
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |         Space         |App |Alt |Gui |Ctrl |
     * `-----------------------------------------------------------'
     */
    KEYMAP( \
        GRV,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10,  F11,F12,  DEL, \
        TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR, UP,TRNS,TRNS, \
        TRNS,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,  LEFT,RGHT,TRNS,  \
        TRNS,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   END,PGDN,   DOWN,  TRNS, \
        TRNS,TRNS,TRNS,         TRNS,                   TRNS, TRNS,TRNS,TRNS),



};

const uint16_t fn_actions[] PROGMEM = {
 [0]  = ACTION_LAYER_MOMENTARY(1),
};
