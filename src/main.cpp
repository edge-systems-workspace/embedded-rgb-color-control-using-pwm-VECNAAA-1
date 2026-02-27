#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Saurav Gautam
 * @date 2026-02-27
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

// TODO 1:
// Define RED pin (Use 9)
const int redPin = 9;

// TODO 2:
// Define GREEN pin (Use 10)
const int greenPin = 10;

// TODO 3:
// Define BLUE pin (Use 11)
const int bluePin = 11;

void setup() {

    // TODO 4:
    // Initialize Serial communication (9600 baud)
    Serial.begin(9600);

    // TODO 5:
    // Configure RGB pins as OUTPUT
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);

    // TODO 6:
    // Print initialization message
    Serial.println("==================================");
    Serial.println(" RGB LED Control System Started ");
    Serial.println("==================================");
}

void loop() {

    // -------- DIGITAL MODE --------

    // TODO 7:
    // Turn ON red (digital HIGH)
    digitalWrite(redPin, HIGH);
    delay(1000);

    // TODO 8:
    // Turn OFF red
    digitalWrite(redPin, LOW);
    delay(500);

    // -------- ANALOG (PWM) MODE --------

    // TODO 9:
    // Set RED brightness using analogWrite()
    analogWrite(redPin, 255);   // Full brightness
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
    delay(1000);

    // TODO 10:
    // Set GREEN brightness using analogWrite()
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 0);
    delay(1000);

    // TODO 11:
    // Set BLUE brightness using analogWrite()
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255);
    delay(1000);

    // BONUS: Mixed Color (Purple Example)
    analogWrite(redPin, 150);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 150);

    // TODO 12:
    // Add delay for visible transition
    delay(1500);
}