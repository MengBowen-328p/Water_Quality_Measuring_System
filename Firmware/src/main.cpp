#include <Arduino.h>
#include <GUI.h>
#include <Sensor.h>
Screen screen = Screen();

void setup()
{
    screen.initDisplay();
    screen.showMainMenu();
}
void loop()
{
    screen.routine(5);
}