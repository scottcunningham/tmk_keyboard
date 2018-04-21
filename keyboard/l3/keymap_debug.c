#include "keymap_debug.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  KEYMAP_DEBUG(
      A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,
      A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,
      A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,
      A,B,C,D,E,F,G,H,I,J,K,L,FN0,N,O,P,Q,R,S,T,
      A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T),
  KEYMAP_DEBUG(
      FN1,FN2,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,
      A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,
      A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,
      A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,
      A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T)
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
