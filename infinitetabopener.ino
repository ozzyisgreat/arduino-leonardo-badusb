#include "Keyboard.h"

void setup() {
delay(2500);
}


void loop(){
delay(150);
Keyboard.begin();
Keyboard.press(KEY_LEFT_CTRL);
Keyboard.press('t');
Keyboard.releaseAll();
Keyboard.end();
}
