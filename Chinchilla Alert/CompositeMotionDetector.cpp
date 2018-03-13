#include "CompositeMotionDetector.h"
#include <Arduino.h>


CompositeMotionDetector::CompositeMotionDetector(SoundAlarm *soundAlarm, LcdDisplay *lcdDisplay, MotionDetector* motionDetectors, int motionDetectorsCount)
{
    this->soundAlarm = soundAlarm;
    this->lcdDisplay = lcdDisplay;
    this->motionDetectors = motionDetectors;
    this->motionDetectorsCount = motionDetectorsCount;
}


CompositeMotionDetector::~CompositeMotionDetector()
{
}

void CompositeMotionDetector::initialize()
{
    for (int i = 0; i < motionDetectorsCount; i++)
    {
        motionDetectors[i].initialize();
    }

    //the time we give the sensor to calibrate (10-60 secs according to the datasheet)
    delay(30000);
}

void CompositeMotionDetector::detect()
{
    for (int i = 0; i < motionDetectorsCount; i++)
    {
        if (motionDetectors[i].detect())
        {
            currentLocation = motionDetectors[i].getLocation();

            soundAlarm->turnOn();

            if (currentLocation != previousLocation)
            {
                lcdDisplay->print("Alert location", "L01");
                previousLocation = currentLocation;
            }

            return;
        }
    }

    currentLocation = -1;

    soundAlarm->turnOff();

    if (currentLocation != previousLocation)
    {
        lcdDisplay->ready();
        previousLocation = currentLocation;
    }
}
