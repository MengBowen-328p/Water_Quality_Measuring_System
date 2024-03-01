//
// Created by 孟博文 on 2024/3/1.
//

#include "Sensor.h"
TwoWire sensorwire = TwoWire(0);
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_614MS, TCS34725_GAIN_1X);

void COLORSENSOR::initSensor(void)
{
    sensorwire.begin(32,33);

}