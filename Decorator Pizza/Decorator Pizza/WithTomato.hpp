#pragma once

#include "Decorator.hpp"

class WithTomato:public Decorator
{
public:
    WithTomato(Pizza* pt);
    void info()const override;
    int getSum() override;
};
