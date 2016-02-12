#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(ESC,   Q,    W,   E,   R,   T,    Y,   U,   I,    O,    P,  BSPC, \
           TAB,   A,    S,   D,   F,   G,    H,   J,   K,    L,   ENT,       \
           A,  LSFT,  Z,    X,   C,   V,   B,    N,   M,  DOT,  RSFT,  B    \
           B,  LCTL, LALT, SPC, 0, 1,  SPC,   2,   3,  RALT, RCTL, A              )
};
const uint16_t PROGMEM fn_actions[] = {};
