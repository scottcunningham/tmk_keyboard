#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Bspc |
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|Fn3|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn |
     * |-----------------------------------------------------------|
     * |    |Gui |Alt |      Space             |    |Alt |Gui |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB( \
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL,BSLS, GRV,\
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
        LCTL, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,    ENT, \
        LSFT,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,   RSFT,FN0, \
           LGUI,LALT,          SPC,                         RALT,RGUI
    ),
    /* 1: HHKB Fn layer
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|Ejc|   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB( \
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, DEL, \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,UP,  TRNS,DEL,  \
        TRNS,MUTE,VOLD,VOLU,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,LEFT,RGHT,   TRNS,  \
        TRNS,MPLY,MPRV,MNXT,MSTP,TRNS,TRNS,TRNS,END, PGDN,DOWN,     TRNS,TRNS, \
           TRNS,TRNS,          TRNS,                          TRNS,TRNS
    ),
};


const uint16_t fn_actions[] PROGMEM = {
 [0]  = ACTION_LAYER_MOMENTARY(1),
};
