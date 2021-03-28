#pragma once

#include "AbstratBuilder.h"

class Director
{
    AbstratBuilder* builder = nullptr;
public:
    void setPcBuilder(AbstratBuilder*b);
    PC* getNewPc()const;
    void constructPC();
};




