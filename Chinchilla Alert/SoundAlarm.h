#pragma once
class SoundAlarm
{
private:
    const int alarmPin = 8;

public:
    SoundAlarm();
    ~SoundAlarm();

    void initialize();

    void turnOn();
    void turnOff();
};

