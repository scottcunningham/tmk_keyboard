/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <avr/io.h>
#include "stdint.h"
#include "led.h"

/* OneHand v1 LEDs
 * left-to-right: PB5 PB6 PD7 PB7 PC6
 */

void led_set(uint8_t usb_led)
{
    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        // output high
        DDRB  |= (1<<5);
        PORTB |= (1<<5);
        DDRB  |= (1<<6);
        PORTB |= (1<<6);
        DDRD  |= (1<<7);
        PORTD |= (1<<7);
        DDRB  |= (1<<7);
        PORTB |= (1<<7);
        DDRC  |= (1<<6);
        PORTC |= (1<<6);
    } else {
        // Hi-Z
        DDRB  &= ~(1<<5);
        PORTB &= ~(1<<5);
        DDRB  &= ~(1<<6);
        PORTB &= ~(1<<6);
        DDRD  &= ~(1<<7);
        PORTD &= ~(1<<7);
        DDRB  &= ~(1<<7);
        PORTB &= ~(1<<7);
        DDRC  &= ~(1<<6);
        PORTC &= ~(1<<6);
    }
}
