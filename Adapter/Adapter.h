#pragma once

#include "AbstractNewElectricitySystem.h"
#include "OldElectricitySystem.h"

class Adapter:public AbstractNewElectricitySystem
{
    OldElectricitySystem & ols;
public:
    Adapter(OldElectricitySystem& o);
    string matchWideSocket() const override;
};




