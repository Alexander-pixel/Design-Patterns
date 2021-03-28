#pragma once

#include "Pizza.hpp"

class BigPizza:public Pizza
{
    int value = 25;
public:
    void info()const override;
    
    int getSum() override;
};

