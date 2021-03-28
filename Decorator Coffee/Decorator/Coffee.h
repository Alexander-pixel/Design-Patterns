#pragma once

#include "Beverage.h"

class Coffee: public Beverage
{
    int value = 10;
public:
    void info() override;
    int getValue()const override;
    int getSum()override;
};




