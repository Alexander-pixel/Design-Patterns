#pragma once

#include "Beverage.h"
#include "Coffee.h"

class Decorator:public Beverage
{
protected:
    Beverage* component = nullptr;
public:
    Decorator(Beverage*pt);
    void info()override;
    ~Decorator()override;
};




