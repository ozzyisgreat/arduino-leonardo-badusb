#include "Keyboard.h"

void setup() {
Keyboard.begin();
delay(4500);
Keyboard.press(KEY_LEFT_CTRL);
Keyboard.press('t');
delay(100);
Keyboard.releaseAll();

delay(850);
Keyboard.print("https://www.youtube.com/watch?v=QDia3e12czc");
Keyboard.press(KEY_RETURN);

Keyboard.end();
}


void loop(){

}
