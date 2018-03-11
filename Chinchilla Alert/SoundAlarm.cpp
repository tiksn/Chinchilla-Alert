#include "SoundAlarm.h"
#include <arduino.h>


SoundAlarm::SoundAlarm()
{
}


SoundAlarm::~SoundAlarm()
{
}

void SoundAlarm::initialize()
{
    pinMode(alarmPin, OUTPUT);
}

void SoundAlarm::turnOn()
{
    digitalWrite(alarmPin, HIGH);
}

void SoundAlarm::turnOff()
{
    digitalWrite(alarmPin, LOW);
}
