#pragma once

#include "AbstractNewElectricitySystem.h"

class NewElectricitySystem: public AbstractNewElectricitySystem
{
    int voltage =0;
public:
    NewElectricitySystem();
    string  matchWideSocket()const;
};




