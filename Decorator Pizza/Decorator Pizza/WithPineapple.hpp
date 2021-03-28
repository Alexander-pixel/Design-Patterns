#pragma once

#include "Decorator.hpp"

class WithPineapple:public Decorator
{
public:
    WithPineapple(Pizza* pt);
    void info()const override;
    int getSum() override;
};
