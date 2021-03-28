#pragma once

#include "Decorator.h"

class WithMilk:public Decorator
{
    int value = 3;
public:
    WithMilk(Beverage*pt);
    void info()override;
    int getValue()const override;
    int getSum() override;
};




