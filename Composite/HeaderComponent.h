#pragma once

#include "AbstractComponent.h"

class HeaderComponent:public AbstractComponent
{
    string data;
public:
    HeaderComponent();
    string gatherData()override;
};




