#pragma once

#include "Unit.h"

class Wizard:public Unit
{
protected:
    int mp=0;
public:
    Wizard(const string&n, int m);
};




