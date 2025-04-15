#pragma once

#define DEBUG true

#if DEBUG

#define DEBUG_LED 3
#define BAUD_RATE 9600

/**
 * Invoked once when the Arduino is initialized.
 */
void debug_setup();
#endif
