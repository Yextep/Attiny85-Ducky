// [ ===== Created using duckify.huhn.me @ dev 356a9805 ===== ] //
// Duckify is a free and Open-Source web-app for converting Ducky Script into Arduino code.
// Please consider supporting us on ko-fi.com/spacehuhn <3
// Learn more about us at spacehuhn.com

// Platform: Digispark
// Keyboard Layout: ES

#include "DigiKeyboard.h"

// chrome 
const uint8_t key_arr_0[] PROGMEM = {0,6, 0,11, 0,21, 0,18, 0,16, 0,8, 0,44};
// gmail.com 
const uint8_t key_arr_1[] PROGMEM = {0,10, 0,16, 0,4, 0,12, 0,15, 0,55, 0,6, 0,18, 0,16, 0,44};
// google@gmail.com
const uint8_t key_arr_2[] PROGMEM = {0,10, 0,18, 0,18, 0,10, 0,15, 0,8, 64,31, 0,10, 0,16, 0,4, 0,12, 0,15, 0,55, 0,6, 0,18, 0,16};
// "Aquí va el asunto" 
const uint8_t key_arr_3[] PROGMEM = {2,31, 2,4, 0,20, 0,24, 0,52, 0,12, 0,44, 0,25, 0,4, 0,44, 0,8, 0,15, 0,44, 0,4, 0,22, 0,24, 0,17, 0,23, 0,18, 2,31, 0,44};
// Aquí va la descripción del mensaje 
const uint8_t key_arr_4[] PROGMEM = {2,4, 0,20, 0,24, 0,52, 0,12, 0,44, 0,25, 0,4, 0,44, 0,15, 0,4, 0,44, 0,7, 0,8, 0,22, 0,6, 0,21, 0,12, 0,19, 0,6, 0,12, 0,52, 0,18, 0,17, 0,44, 0,7, 0,8, 0,15, 0,44, 0,16, 0,8, 0,17, 0,22, 0,4, 0,13, 0,8, 0,44};

void duckyString(const uint8_t* keys, size_t len) {  
    for(size_t i=0; i<len; i+=2) {
        DigiKeyboard.sendKeyStroke(pgm_read_byte_near(keys + i+1), pgm_read_byte_near(keys + i));
    }
}

void setup() {
    pinMode(1, OUTPUT); // Enable LED
    digitalWrite(1, LOW); // Turn LED off
    DigiKeyboard.sendKeyStroke(0); // Tell computer no key is pressed

    DigiKeyboard.delay(2500); // DELAY 2500
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(21, 8); // GUI R
    DigiKeyboard.delay(500);
    duckyString(key_arr_0, sizeof(key_arr_0)); // STRING chrome 
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(500); // DELAY 500
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(1500); // DELAY 1500
    DigiKeyboard.delay(500);
    duckyString(key_arr_1, sizeof(key_arr_1)); // STRING gmail.com 
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(3000); // DELAY 3000
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(43, 0); // TAB
    DigiKeyboard.delay(500);
    for(size_t i=0; i<11; ++i) {
    DigiKeyboard.sendKeyStroke(43, 0); // TAB
    DigiKeyboard.delay(500);
    }
    DigiKeyboard.delay(500); // DELAY 500
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(82, 0); // UP
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(500); // DELAY 500
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(750); // DELAY 750
    DigiKeyboard.delay(500);
    duckyString(key_arr_2, sizeof(key_arr_2)); // STRING google@gmail.com
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(500); // DELAY 500
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(43, 0); // TAB
    DigiKeyboard.delay(500);
    duckyString(key_arr_3, sizeof(key_arr_3)); // STRING "Aquí va el asunto" 
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(500); // DELAY 500
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(43, 0); // TAB
    DigiKeyboard.delay(500);
    duckyString(key_arr_4, sizeof(key_arr_4)); // STRING Aquí va la descripción del mensaje 
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(43, 0); // TAB
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(1000); // DELAY 1000
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(61, 4); // ALT F4
    DigiKeyboard.delay(500);
}

void loop() {}

// Created using duckify.huhn.me @ dev 356a9805
