#include <LiquidCrystal.h>

#pragma once

class LcdDisplay
{
private:
    LiquidCrystal lcd = LiquidCrystal(12, 2, 4, 5, 6, 7);

public:
    LcdDisplay();
    ~LcdDisplay();

    void initialize();
    void ready();
    void print(char* line1);
    void print(char* line1, char* line2);
};

