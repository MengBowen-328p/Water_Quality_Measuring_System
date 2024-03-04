#include <Arduino.h>
#include "GUI/GUI.h"
#include <Sensor.h>
#include <Calculate.h>
#include "Keys.h"
#include "lv_port_indev.h"

Screen screen = Screen();
COLORSENSOR colorsensor = COLORSENSOR();
lv_ui guider_ui;

void setup()
{
    screen.initDisplay();
    screen.initGUI();
    colorsensor.initSensor();
}
void loop()
{
    screen.routine(5);
    colorsensor.getColor();
}