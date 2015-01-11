#include "keymap_common.h"
/*
 *  m        mm   mmmmmmm     m mmmm    mmmm    mmm
 *  #        ##       #" "m m"  #   "m m"  "m m"   "
 *  #       #  #    m#    "#"   #    # #    # #   mm
 *  #       #mm#   m"      #    #    # #    # #    #
 *  #mmmmm #    # ##mmmm   #    #mmm"   #mm#   "mmm"
 */

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty
     * ,----------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0| - | + | Bspac |Del |
     * |-----------------------------------------------------------|----|
     * | Tab | q | w | e | r | t | y | u | i | o | p | { | } |  \  |PgUp|
     * |-----------------------------------------------------------|----|
     * | FnLk | a | s | d | f | g | h | j | k | l | ; | ' | Return |PgDn|
     * |-----------------------------------------------------------|----|
     * | LShift | z | x | c | v | b | n | m | , | . | /  |Rshft|UAr|Fn1 |
     * |-----------------------------------------------------------|----|
     * |Ctr|Win|Alt|                       |Alt|Win|Men|Ctr|LAr|DAr|RAr |
     * `----------------------------------------------------------------.
    */
    KEYMAP(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL,   BSPC, GRV, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,  BSLS, GRV, \
        FN1, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,       ENT,  GRV, \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,      RSFT, UP,   FN0, \
        LCTL,LGUI,LALT,          SPC,           RALT,RGUI,APP, RCTL, LEFT, DOWN, RIGHT),
    // 1: Locking function layer: with Grave in top-left in place of esc.
   /* 0: qwerty
    *
    *
     * ,----------------------------------------------------------------.
     * |Grv|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0| - | + | Bspac |Del |
     * |-----------------------------------------------------------|----|
     * | Tab | q | w | e | r | t | y | u | i | o | p | { | } |  \  |PgUp|
     * |-----------------------------------------------------------|----|
     * | FnLk | a | s | d | f | g | h | j | k | l | ; | ' | Return |PgDn|
     * |-----------------------------------------------------------|----|
     * | LShift | z | x | c | v | b | n | m | , | . | /  |Rshft|UAr|Fn1 |
     * |-----------------------------------------------------------|----|
     * |Ctr|Win|Alt|                       |Alt|Win|Men|Ctr|LAr|DAr|RAr |
     * `----------------------------------------------------------------.
    */
    KEYMAP(
        GRV, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, TRNS, TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS, TRNS, TRNS, \
        TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS ),
    /* 2: Regular fn layer:
     *  - Grv in place of esc
     *  - F1-F12 on numbers
     *  - Up/Down/Left/Right on HHKB + WASD
     *  - PgUp/PgDn -> Home/End
     *  - PrintScreen top-right
     *  - Mute on V
     *  - Vol Up/Down on B/N
     *
     * ,----------------------------------------------------------------.
     * |Grv| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  Del  |PScr|
     * |-----------------------------------------------------------|----|
     * |     |   | Up|   |   |   |   |   |   |   |   |Up |Ins|     |Home|
     * |-----------------------------------------------------------|----|
     * |      |Lef|Dow|Rig|   |   |   |   |   |   |Lef|Rig|        |End |
     * |-----------------------------------------------------------|----|
     * |        |   |   |   |Mut|VoU|VoD|   |   |   |Dow|          |    |
     * |-----------------------------------------------------------|----|
     * |    |    |    |                        |    |    |    |    |    |
     * `----------------------------------------------------------------.
     */
    KEYMAP(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, PSCR, \
        TRNS,TRNS, UP,  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,INS,TRNS,HOME, \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT, RIGHT,      TRNS,END, \
        TRNS,TRNS, TRNS,TRNS,MUTE,VOLU,VOLD,TRNS,TRNS,TRNS,DOWN,      TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS ),
};
const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(2),  // to Fn overlay
    [1] = ACTION_LAYER_TOGGLE(0)     // locking MXLOCK --> esc mode
};
