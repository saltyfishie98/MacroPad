#include "KeyMaps.h"
#include <Arduino.h>

void setup()
{
    Serial.begin(9600);
    for (const auto& key : macros) {
        pinMode(key.pin, INPUT);
    }
    Keyboard.begin();
}

void loop()
{
    static Macro_t currentMacro = 0;
    static uint32_t now = 0;
    static uint32_t previousmillis = millis();

    if (digitalRead(macros[currentMacro].pin) == HIGH) {

        now = millis();
        if (now - previousmillis > 200) {
            previousmillis = now;

            for (const auto& action : macros[currentMacro].actions) {
                if (action == 0)
                    continue;
                Keyboard.press(action);
            }
            Keyboard.releaseAll();
        }
    }

    currentMacro = (currentMacro + 1) % 16;
}