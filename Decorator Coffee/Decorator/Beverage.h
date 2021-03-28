#pragma once

#include <iostream>
using namespace std;

class Beverage
{
public:
    virtual void info() = 0;
    virtual ~Beverage();
    
    virtual int getSum()=0;
    virtual int getValue()const = 0;
};



