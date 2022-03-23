#ifndef DEFINITONS_H_
#define DEFINITONS_H_

#include <Arduino.h>

using Macro_t = uint8_t;

// Key to Pin Mapping
#define M00 6
#define M01 5
#define M02 4
#define M03 3
#define M04 2
#define M05 7
#define M06 8
#define M07 9
#define M09 10
#define M08 16
#define M10 14
#define M11 15
#define M12 18
#define M13 19
#define M14 20
#define M15 21

struct KeyMap
{
    Macro_t pin;
    Macro_t actions[6]; // define max amount of keys per macro
};

#endif // DEFINITONS_H_