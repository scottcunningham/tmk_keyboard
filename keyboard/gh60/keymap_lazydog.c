#include "keymap_common.h"
/*
 *  m        mm   mmmmmmm     m mmmm    mmmm    mmm
 *  #        ##       #" "m m"  #   "m m"  "m m"   "
 *  #       #  #    m#    "#"   #    # #    # #   mm
 *  #       #mm#   m"      #    #    # #    # #    #
 *  #mmmmm #    # ##mmmm   #    #mmm"   #mm#   "mmm"
 */

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL,   BSPC, GRV, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,  BSLS, GRV, \
        FN1, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,       ENT,  GRV, \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,      RSFT, UP,   FN0, \
        LCTL,LGUI,LALT,          SPC,           RALT,RGUI,APP, RCTL, LEFT, DOWN, RIGHT),
    // 1: Locking function layer: with Grave in top-left in place of esc.
    KEYMAP(
        GRV, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, TRNS, TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS, TRNS, TRNS, \
        TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS ),
    /* 2: Regular fn layer
     * ,--------------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |  |
     * |-----------------------------------------------------------|---
     * |     |   | Up|   |   |   |   |   |   |Cal|   |Hom|Ins|     |  |
     * |-----------------------------------------------------------|---
     * |      |Lef|Dow|Rig|   |   |Psc|Slk|Pau|   |Tsk|End|        |  |
     * |-----------------------------------------------------------|---
     * |        |Del|   |Web|Mut|VoU|VoD|   |PgU|PgD|Del|          |  |
     * |-----------------------------------------------------------|---
     * |    |    |    |                        |    |    |    |    |  |
     * `--------------------------------------------------------------.
     */
    KEYMAP(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS,TRNS, \
        TRNS,TRNS, UP,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,CALC,TRNS,HOME,INS,TRNS,TRNS, \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,PSCR,SLCK,PAUS,TRNS,TRNS, END,      TRNS,TRNS, \
        TRNS,DEL, TRNS,WHOM,MUTE,VOLU,VOLD,TRNS,PGUP,PGDN,DEL,      TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS ),
};
const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(2),  // to Fn overlay
    [1] = ACTION_LAYER_TOGGLE(0)     // locking MXLOCK --> esc mode
};
