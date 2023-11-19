#include "quantum.h"

// Define the LED pin
#define LED_PIN GP4

void blink_led_core1(void) {
    while (1) {
        writePinHigh(LED_PIN);   // Turn on the LED
        wait_ms(500);            // Wait for 500 milliseconds
        writePinLow(LED_PIN);    // Turn off the LED
        wait_ms(500);            // Wait for 500 milliseconds
    }
}

void matrix_init_user(void) {
    // Initialize the LED pin
    setPinOutput(LED_PIN);
    blink_led_core1();
}

void matrix_scan_user(void) {
    // Your main code here
    wait_ms(1000);  // Adjust this as needed
}

void suspend_power_down_user(void) {
    // Optional: Handle power-down behavior
}

void suspend_wakeup_init_user(void) {
    // Optional: Handle wakeup initialization
}
