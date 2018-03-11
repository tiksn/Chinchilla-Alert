#include "LcdDisplay.h"

LcdDisplay lcdDisplay;

void setup()
{
    lcdDisplay.initialize();
}

void loop()
{
    lcdDisplay.print("Chinchilla Alert");
    delay(3000);
}
