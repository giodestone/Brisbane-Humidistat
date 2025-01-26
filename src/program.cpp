#include "program.h"

#include <Fonts/FreeMonoBold9pt7b.h>


// mapping suggestion for ESP32, e.g. TTGO T8 ESP32-WROVER
// BUSY -> 4, 
// RST -> 0, 
// DC -> 2, 
// CS -> SS(5), 
// CLK -> SCK(18), 
// DIN -> MOSI(23), 
// GND -> GND, 3.3V -> 3.3V
// for use with Board: "ESP32 Dev Module":

Program::Program()
    : display(GxEPD2_290_BS(/*CS=5*/ GPIO_NUM_5, /*DC=0, new 4*/ GPIO_NUM_4, /*RES=2*/ GPIO_NUM_2, /*BUSY=15*/ GPIO_NUM_15))
// SDA: GPIO21/D21      SCL: GPIO22/SCL
{
}

Program::~Program()
{
}

void Program::Setup()
{
    Serial.begin(115200);
    Serial.println("hello");

    Wire.begin();
    display.init(115200,true,50,false);
    display.setFont(&FreeMonoBold9pt7b);
    display.setRotation(1);
     
    display.setTextColor(GxEPD_BLACK);
    int16_t tbx, tby; uint16_t tbw, tbh;
    display.getTextBounds("Hello!!!!", 0, 0, &tbx, &tby, &tbw, &tbh);
    uint16_t x = ((display.width() - tbw) / 2) - tbx;
    uint16_t y = ((display.height() - tbh) / 2) - tby;
    display.setFullWindow();
    display.firstPage();

    do
    {
        display.fillScreen(GxEPD_WHITE);
        display.setCursor(x, y);
        display.print("Hello!!!!");
    }

  while (display.nextPage());

    display.hibernate();
}

void Program::Loop()
{
        Serial.println("hello");

}
