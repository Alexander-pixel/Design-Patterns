#pragma once

#include "Decorator.hpp"

class WithCheese:public Decorator
{
public:
    WithCheese(Pizza* pt);
    void info()const override;
    int getSum() override;
};
