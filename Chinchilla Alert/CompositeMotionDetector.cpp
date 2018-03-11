#include "CompositeMotionDetector.h"



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
}
