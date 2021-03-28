#pragma once

#include "Pizza.hpp"
#include "SmallPizza.hpp"
#include "Big Pizza.hpp"

class Decorator:public Pizza
{
protected:
    Pizza* component = nullptr;
    int value;
public:
    Decorator(Pizza*pt);
    void info()const override;
    ~Decorator()override;
};

