#include "MotionDetector.h"
#include "SoundAlarm.h"
#include "LcdDisplay.h"

#pragma once
class CompositeMotionDetector
{
private:
    SoundAlarm * soundAlarm;
    LcdDisplay *lcdDisplay;
    MotionDetector * motionDetectors;
    int motionDetectorsCount;
    int currentLocation = -1;
    int previousLocation = -1;

public:
    CompositeMotionDetector(SoundAlarm *soundAlarm, LcdDisplay *lcdDisplay, MotionDetector* motionDetectors, int motionDetectorsCount);
    ~CompositeMotionDetector();

    void initialize();

    void detect();
};

