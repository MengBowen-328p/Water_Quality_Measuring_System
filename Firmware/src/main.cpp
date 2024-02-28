#include <Arduino.h>
#include <Wire.h>
#include <GUI.h>

Display display;

void setup() {
    pinMode(1,OUTPUT);
    display.initGUI();
    display.showMainMenu();
// write your initialization code here
}

void loop() {
    digitalWrite(1,HIGH);
    display.routine();
    delay(5);
// write your code here
}