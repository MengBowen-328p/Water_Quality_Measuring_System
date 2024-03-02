//
// Created by 孟博文 on 2024/3/1.
//

#ifndef FIRMWARE_SENSOR_H
#define FIRMWARE_SENSOR_H

#include <TCS34725.h>
#include <Wire.h>
#include "stdio.h"

#define SENSOR_SDA 32
#define SENSOR_SCL 33

class COLORSENSOR {
public:
    boolean initSensor(void);

    void getColor(void);

    float getR(void);

    float getG(void);

    float getB(void);

private:

};

#endif //FIRMWARE_SENSOR_H
