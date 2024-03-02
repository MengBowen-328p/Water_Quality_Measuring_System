#include <Arduino.h>
#include "GUI/GUI.h"
#include <Sensor.h>
#include <Calculate.h>
#include "Keys.h"

Screen screen = Screen();
COLORSENSOR colorsensor = COLORSENSOR();
lv_ui guider_ui;

void setup()
{
    screen.initDisplay();
    screen.initGUI();
    colorsensor.initSensor();
//    initKeys();
}
void loop()
{
    screen.routine(5);
    colorsensor.getColor();
}