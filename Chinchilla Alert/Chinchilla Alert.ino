#include "LcdDisplay.h"
#include "SoundAlarm.h"

LcdDisplay lcdDisplay;
SoundAlarm soundAlarm;

void setup()
{
    lcdDisplay.initialize();
    soundAlarm.initialize();
}

void loop()
{
    lcdDisplay.print("Chinchilla Alert");
    delay(3000);

    soundAlarm.turnOn();
    delay(1000);

    soundAlarm.turnOff();
    delay(10000);
}
