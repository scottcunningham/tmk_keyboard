#include <avr/pgmspace.h>
#include "ledmap.h"
#include "debug.h"


#ifdef LEDMAP_ENABLE

static const uint16_t ledmaps[LED_COUNT] PROGMEM = {
#ifdef LEDMAP_V2
    [0] = LEDMAP_ACTIVE_LOW | LEDMAP_CAPS_LOCK | LEDMAP_BACKLIGHT,  // CapsLock - PB2
    [1] = LEDMAP_ACTIVE_HIGH | LEDMAP_BACKLIGHT,                    // PWM      - PB6
#else
    [0] = LEDMAP_CAPS_LOCK | LEDMAP_BACKLIGHT,  // CapsLock - PB2
    [1] = LEDMAP_BACKLIGHT,                     // PWM      - PB6
#endif
};

ledmap_t ledmap_get_code(uint8_t index)
{
    return (ledmap_t) { .code = pgm_read_word(&ledmaps[index]) };
}

#ifndef LEDMAP_V2
void ledmap_led_init(void)
{
    DDRB |= (1<<PB2);
    PORTB |= (1<<PB2);
    DDRB  |= (1<<PB6);
    PORTB &= ~(1<<PB6);
#endif
}

void ledmap_led_on(uint8_t index)
{
    switch (index) {
        case 0:
            PORTB &= ~(1<<PB2);
            break;
        case 1:
            PORTB |= (1<<PB6);
            break;
    }
}

void ledmap_led_off(uint8_t index)
{
    switch (index) {
        case 0:
            PORTB |= (1<<PB2);
            break;
        case 1:
            PORTB &= ~(1<<PB6);
            break;
    }
}

#endif
