#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP( ESC, 1,   2,   3,   X,   \
            TAB, 4,   5,   6,   Y,   \
                 7,   8,   9,        \
            ESC,  0,COMMA,DOT, ENTER)
};

const uint16_t PROGMEM fn_actions[] = {};
