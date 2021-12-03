#include "Keyboard.h"

void setup() {
Keyboard.begin();
delay(1000);
Keyboard.print("sudo apt autoremove && sudo apt update && sudo apt upgrade && sudo apt clean");

Keyboard.end();
}


void loop(){
}
