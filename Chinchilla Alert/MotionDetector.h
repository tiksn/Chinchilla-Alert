#pragma once
class MotionDetector
{
private:
    int pin;
    int location;

public:
    MotionDetector(int pin, int location);
    ~MotionDetector();

    void initialize();
};

