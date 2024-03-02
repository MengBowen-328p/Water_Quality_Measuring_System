//
// Created by 孟博文 on 2024/3/1.
//

#include "Sensor.h"

TwoWire sensorwire = TwoWire(0);
TCS34725 tcs;
float color_buffer[3] = {0.0, 0.0, 0.0};

boolean COLORSENSOR::initSensor(void) {
    sensorwire.begin(SENSOR_SDA, SENSOR_SCL);
    pinMode(34, OUTPUT);
    if (!tcs.attach(sensorwire)) {
        return false;
    } else {
        tcs.integrationTime(33.0);
        return true;
    }
}

void COLORSENSOR::getColor(void) {
    digitalWrite(33, HIGH);      //Turn on the LED to get more light
    tcs.gain(TCS34725::Gain::X01);
    digitalWrite(33, LOW);   //Turn off the LED
    TCS34725::Color color = tcs.color();
    color_buffer[0] = color.r;
    color_buffer[1] = color.g;
    color_buffer[2] = color.b;
}

float COLORSENSOR::getR(void) {
    return color_buffer[0];
}

float COLORSENSOR::getG(void) {
    return color_buffer[1];
}

float COLORSENSOR::getB(void) {
    return color_buffer[2];
}


