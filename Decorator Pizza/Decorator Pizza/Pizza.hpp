#pragma once

#include <iostream>
using namespace std;

class Pizza
{
public:
    virtual void info()const = 0;
    virtual ~Pizza();
    
    virtual int getSum()=0;
};
