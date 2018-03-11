#include "LcdDisplay.h"
#include "SoundAlarm.h"
#include "MotionDetector.h"
#include "CompositeMotionDetector.h"

LcdDisplay lcdDisplay;
SoundAlarm soundAlarm;

MotionDetector motionDetectors{ MotionDetector(13, 1) };
CompositeMotionDetector compositeMotionDetector(&motionDetectors, 1);

void setup()
{
    Serial.begin(9600);
    lcdDisplay.initialize();
    lcdDisplay.print("Chinchilla Alert");
    soundAlarm.initialize();
    compositeMotionDetector.initialize();
}

void loop()
{
    //soundAlarm.turnOn();
    delay(1000);

    soundAlarm.turnOff();
    delay(10000);
}
