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

void LcdDisplay::print(char* message)
{
    lcd.clear();
    lcd.home();
    lcd.print(message);
}
