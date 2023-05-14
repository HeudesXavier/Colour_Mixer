#include "mbed.h"

// Define AnalogIn objects for potentiometers
AnalogIn redPot(A0);
AnalogIn greenPot(A1);

// Define PwmOut objects for LEDs
PwmOut redLed(LED1);
PwmOut greenLed(LED2);

// Define delay time (in seconds)
const float delayTime = 0.05;

int main() {
    while(1) {
        // Read analog values from potentiometers
        float redVal = redPot.read();
        float greenVal = greenPot.read();

        // Set PWM values for red and green LEDs
        redLed = redVal;
        greenLed = greenVal;

        // Print analog values to console
        printf("Red pot: %.2f, Green pot: %.2f\n", redVal, greenVal);

        // Wait for delay time
        wait(delayTime);
    }
}
