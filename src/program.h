#pragma once

#include <GxEPD2_BW.h>

class Program
{
private:
    GxEPD2_BW<GxEPD2_290_BS, GxEPD2_290_BS::HEIGHT> display; // DEPG0290BS 128x296, SSD1680

public:
    Program();
    ~Program();

    void Setup();
    void Loop();
};