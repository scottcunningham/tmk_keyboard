#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include <avr/pgmspace.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"


extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const uint16_t fn_actions[];


/* Alps64 keymap definition macro */
// The key between K40 and K42 was re-assigned to K31 (left shift) because I screwed up the pads on the
// real left shift switch and patched it to use the otherwise unused ISO key. The key on the bottom-left
// of the matrix layout should be K70, but I also screwed up K00 so I used those pads for that key.
#define KEYMAP_SCOTT( \
            K36, K37, K46, K47, K56, K57, K66, K67, K76, K77, K06, K07, K17,   K27, \
            K34,  K35, K44, K45, K54, K55, K64, K65, K75, K05, K15, K16, K25, K24, \
            K32,   K33, K43, K52, K53, K63, K73, K74, K03, K04, K13, K14,    K23, \
            K31,    K42, K51, K61, K62, K71, K72, K01, K02, K11, K12,    K21,     \
            K30, K40, K50,                  K60,                    K00, K10, K20  \
        ) { \
    { KC_##K00, KC_##K01, KC_##K02, KC_##K03, KC_##K04, KC_##K05, KC_##K06, KC_##K07 }, \
    { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_##K15, KC_##K16, KC_##K17 }, \
    { KC_##K20, KC_##K21, KC_NO,    KC_##K23, KC_##K24, KC_##K25, KC_NO,    KC_##K27 }, \
    { KC_##K30, KC_##K31, KC_##K32, KC_##K33, KC_##K34, KC_##K35, KC_##K36, KC_##K37 }, \
    { KC_##K40, KC_##K31, KC_##K42, KC_##K43, KC_##K44, KC_##K45, KC_##K46, KC_##K47 }, \
    { KC_##K50, KC_##K51, KC_##K52, KC_##K53, KC_##K54, KC_##K55, KC_##K56, KC_##K57 }, \
    { KC_##K60, KC_##K61, KC_##K62, KC_##K63, KC_##K64, KC_##K65, KC_##K66, KC_##K67 }, \
    { KC_##K00, KC_##K71, KC_##K72, KC_##K73, KC_##K74, KC_##K75, KC_##K76, KC_##K77 } \
}
endif
