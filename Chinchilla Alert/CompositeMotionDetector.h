#include "MotionDetector.h"
#include "SoundAlarm.h"

#pragma once
class CompositeMotionDetector
{
private:
    SoundAlarm *soundAlarm;
    MotionDetector * motionDetectors;
    int motionDetectorsCount;

public:
    CompositeMotionDetector(SoundAlarm *soundAlarm, MotionDetector* motionDetectors, int motionDetectorsCount);
    ~CompositeMotionDetector();

    void initialize();

    void detect();
};

