#pragma once

#include "Pizza.hpp"

class SmallPizza:public Pizza
{
    int value = 15;
public:
    void info()const override;
    
    int getSum() override;
    
};
