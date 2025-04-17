#pragma once

#define DEBUG true

#if DEBUG

#include <Arduino.h>

#define PRINT(...) Serial.println(__VA_ARGS__)

#define DEBUG_LED 12
#define BAUD_RATE 9600

/**
 * Invoked once when the Arduino is initialized.
 */
void debug_setup();
#else
#define PRINT(...)
#endif
