#include "MotionDetector.h"
#include <Arduino.h>


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
    pinMode(pin, INPUT);
}

bool MotionDetector::detect()
{
    if (digitalRead(pin) == HIGH)
        return true;

    return false;
}
