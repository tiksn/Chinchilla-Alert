#include "CompositeMotionDetector.h"
#include <Arduino.h>


CompositeMotionDetector::CompositeMotionDetector(MotionDetector* motionDetectors, int motionDetectorsCount)
{
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
