#include "LcdDisplay.h"


LcdDisplay::LcdDisplay()
{
}

LcdDisplay::~LcdDisplay()
{
}

void LcdDisplay::initialize()
{
    lcd.begin(16, 2);
    lcd.clear();
}

void LcdDisplay::print(char* line1)
{
    lcd.clear();
    lcd.home();
    lcd.print(line1);
}

void LcdDisplay::print(char * line1, char * line2)
{
    print(line1);
    lcd.setCursor(0, 1);
    lcd.print(line2);
}
