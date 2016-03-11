#include "keymap_common.h"

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* 0: qwerty
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  #|Bsp|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
     * |-----------------------------------------------------------|
     * |LCtrl |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shft|  \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Esc|
     * |-----------------------------------------------------------'
     * |Ctrl|Gui |Alt |         Space         |App |Alt |Gui |Caps |
     * `-----------------------------------------------------------'
     */
    KEYMAP( \
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL,  BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,  \
        LSFT,    Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,  FN0,  \
        LCTL,LGUI,LALT,          SPC,                     RALT, RGUI,APP,LCAP),
    /* 1: fn layer
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7|  8|  9|  0|  -|  =|  #|Bsp|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
     * |-----------------------------------------------------------|
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shft|  \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Esc|
     * |-----------------------------------------------------------'
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
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
 //[0]  = ACTION_LAYER_MOMENTARY(1),
};
#else
const uint16_t fn_actions[] PROGMEM = {};
#endif
