//
// SerialComm
//
#include <avr/io.h>
#include <util/delay.h>

int main() {
    // setup
    DDRB = 0xFF;
    PORTB = 0x55;

    while (true) {
        PORTB ^= 0xFF;
        _delay_ms(1000);
    }
}
