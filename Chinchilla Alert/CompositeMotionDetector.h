#include "MotionDetector.h"

#pragma once
class CompositeMotionDetector
{
private:
    MotionDetector * motionDetectors;
    int motionDetectorsCount;

public:
    CompositeMotionDetector(MotionDetector* motionDetectors, int motionDetectorsCount);
    ~CompositeMotionDetector();

    void initialize();
};

