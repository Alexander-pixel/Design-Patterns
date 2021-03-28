#pragma once

#include "AbstractComponent.h"

class CustomerComponent:public AbstractComponent
{
    int id=0;
public:
    CustomerComponent(int id_);
    string gatherData() override;
};




