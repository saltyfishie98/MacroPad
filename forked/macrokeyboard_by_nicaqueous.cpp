#include <Keyboard.h>
// Code by youtube.com/nicaqueous
// assign each key to a digital pin
const int key[16] = {6, 5, 4, 3, 2, 7, 8, 9, 10, 16, 14, 15, 18, 19, 20, 21};
uint32_t previousmillis; // used for debouncing
int keypressed = 0;
void setup()
{
    for (int i = 0; i < 16; i++) {
        pinMode(key[i], INPUT);
    }
    Serial.begin(9600);
    Keyboard.begin();
}

void loop()
{
    for (int i = 0; i < 16; i++) {
        if (digitalRead(key[i]) == 1) {
            if (millis() - previousmillis > 200) // debouncing
            {
                previousmillis = millis();
                keypressed = i + 1;
                Serial.println(keypressed);
                switch (keypressed) {
                case 0:
                    break;
                // assign macros here!
                case 1:
                    Keyboard.press(KEY_F13);
                    Keyboard.releaseAll();
                    break;
                case 2:
                    Keyboard.press(KEY_F14);
                    Keyboard.releaseAll();
                    break;
                case 3:
                    Keyboard.press(KEY_F15);
                    Keyboard.releaseAll();
                    break;
                case 4:
                    Keyboard.press(KEY_F16);
                    Keyboard.releaseAll();
                    break;
                case 5:
                    Keyboard.press(KEY_F17);
                    Keyboard.releaseAll();
                    break;
                case 6:
                    Keyboard.press(KEY_F18);
                    Keyboard.releaseAll();
                    break;
                case 7:
                    Keyboard.press(KEY_F19);
                    Keyboard.releaseAll();
                    break;
                case 8:
                    Keyboard.press(KEY_F20);
                    Keyboard.releaseAll();
                    break;
                case 9:
                    Keyboard.press(KEY_F21);
                    Keyboard.releaseAll();
                    break;
                case 10:
                    Keyboard.press(KEY_F22);
                    Keyboard.releaseAll();
                    break;
                case 11:
                    Keyboard.press(KEY_F23);
                    Keyboard.releaseAll();
                    break;
                case 12: // open command prompt
                    Keyboard.press(KEY_LEFT_GUI);
                    Keyboard.press('r');
                    Keyboard.releaseAll();
                    break;
                case 13: // mute/unmute
                    Keyboard.press(KEY_LEFT_CTRL);
                    Keyboard.press(KEY_LEFT_SHIFT);
                    Keyboard.press('m');
                    Keyboard.releaseAll();
                    break;
                case 14: // deafen/undeafen
                    Keyboard.press(KEY_LEFT_CTRL);
                    Keyboard.press(KEY_LEFT_SHIFT);
                    Keyboard.press('d');
                    Keyboard.releaseAll();
                    break;
                case 15: // switch tabs
                    Keyboard.press(KEY_LEFT_ALT);
                    Keyboard.press(KEY_TAB);
                    Keyboard.releaseAll();
                    break;
                case 16: // tba
                    break;
                default:
                    keypressed = 0;
                    break;
                }
            }
        }
    }
}
