#pragma once

#include "Decorator.h"

class WithSugar:public Decorator
{
    int value = 5;
public:
    WithSugar(Beverage*pt);
    void info()override;
    
    int getValue()const override;
    
    int getSum() override;
};




