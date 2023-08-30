// [ ===== Created using duckify.huhn.me @ dev 356a9805 ===== ] //
// Duckify is a free and Open-Source web-app for converting Ducky Script into Arduino code.
// Please consider supporting us on ko-fi.com/spacehuhn <3
// Learn more about us at spacehuhn.com

// Platform: Digispark
// Keyboard Layout: ES

#include "DigiKeyboard.h"

// cmd
const uint8_t key_arr_0[] PROGMEM = {0,6, 0,16, 0,7};
// setup /configure configuration.xml
const uint8_t key_arr_1[] PROGMEM = {0,22, 0,8, 0,23, 0,24, 0,19, 0,44, 2,36, 0,6, 0,18, 0,17, 0,9, 0,12, 0,10, 0,24, 0,21, 0,8, 0,44, 0,6, 0,18, 0,17, 0,9, 0,12, 0,10, 0,24, 0,21, 0,4, 0,23, 0,12, 0,18, 0,17, 0,55, 0,27, 0,16, 0,15};

void duckyString(const uint8_t* keys, size_t len) {  
    for(size_t i=0; i<len; i+=2) {
        DigiKeyboard.sendKeyStroke(pgm_read_byte_near(keys + i+1), pgm_read_byte_near(keys + i));
    }
}

void setup() {
    pinMode(1, OUTPUT); // Enable LED
    digitalWrite(1, LOW); // Turn LED off
    DigiKeyboard.sendKeyStroke(0); // Tell computer no key is pressed

    DigiKeyboard.delay(3000); // DELAY 3000
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(43, 0); // TAB
    DigiKeyboard.delay(500);
    for(size_t i=0; i<3; ++i) {
    DigiKeyboard.sendKeyStroke(43, 0); // TAB
    DigiKeyboard.delay(500);
    }
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(76, 0); // DELETE
    DigiKeyboard.delay(500);
    duckyString(key_arr_0, sizeof(key_arr_0)); // STRING cmd
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(1000); // DELAY 1000
    DigiKeyboard.delay(500);
    duckyString(key_arr_1, sizeof(key_arr_1)); // STRING setup /configure configuration.xml
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(2000); // DELAY 2000
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(80, 0); // LEFT
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
}

void loop() {}

// Created using duckify.huhn.me @ dev 356a9805
