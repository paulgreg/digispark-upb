#include "DigiKeyboard.h"
#include "password.h"

#define MOD_CMD_LEFT 0x00000008
#define DELAY 500

// https://digistump.com/board/index.php?topic=1145.0

void setup() {
  pinMode(1, OUTPUT); // LED
  pinMode(2, INPUT); // Button
  DigiKeyboard.sendKeyStroke(0); // For Mac OS
  blink();
}

void loop() {
  if (digitalRead(2) == LOW) {
    openPasswordManager();
    typePassword();
    computeAndPaste();
    blink();
  }
  DigiKeyboard.delay(10);
  DigiKeyboard.update();
}

void blink() { 
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(CHAR_DELAY);
  digitalWrite(1, LOW); 
}

void openPasswordManager() {
  DigiKeyboard.sendKeyStroke(0); // For Mac OS
  DigiKeyboard.delay(CHAR_DELAY);
  DigiKeyboard.sendKeyStroke(KEY_L, MOD_SHIFT_LEFT | MOD_CONTROL_LEFT);
  DigiKeyboard.delay(CHAR_DELAY);
  DigiKeyboard.sendKeyStroke(KEY_L, MOD_SHIFT_LEFT | MOD_CMD_LEFT);  // For Mac OS
  DigiKeyboard.delay(DELAY);
}

void computeAndPaste() {
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.delay(DELAY);
  
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(CHAR_DELAY);
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_CMD_LEFT); // For Mac OS
  DigiKeyboard.delay(CHAR_DELAY);
}
