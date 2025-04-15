#include <Arduino.h>
#include "Debug.h"

#if DEBUG
/**
 * @inherit
 */
void debug_setup() {
#if DEBUG_LED != -1
    // Configure the debug LED.
    pinMode(DEBUG_LED, OUTPUT);
    digitalWrite(DEBUG_LED, LOW);
#endif

    // Initialize the serial monitor.
    Serial.begin(BAUD_RATE);
    while (!Serial) {
        // Wait for the serial monitor to connect.
        // We delay to prevent wasting CPU cycles.
        delay(100);
    }

    Serial.println("[DEBUG] Connected to serial!");
}
#endif
