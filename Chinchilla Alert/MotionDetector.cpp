#include "MotionDetector.h"



MotionDetector::MotionDetector(int pin, int location)
{
    this->pin = pin;
    this->location = location;
}


MotionDetector::~MotionDetector()
{
}

void MotionDetector::initialize()
{
}
