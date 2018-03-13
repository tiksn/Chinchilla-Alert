#include "LcdDisplay.h"
#include "SoundAlarm.h"
#include "MotionDetector.h"
#include "CompositeMotionDetector.h"

LcdDisplay lcdDisplay;
SoundAlarm soundAlarm;

MotionDetector motionDetectors{ MotionDetector(13, 1) };
CompositeMotionDetector compositeMotionDetector(&soundAlarm, &motionDetectors, 1);

void setup()
{
    Serial.begin(9600);
    lcdDisplay.initialize();
    lcdDisplay.print("Chinchilla Alert", "1.0.0");
    soundAlarm.initialize();
    compositeMotionDetector.initialize();
}

void loop()
{
    compositeMotionDetector.detect();
}
