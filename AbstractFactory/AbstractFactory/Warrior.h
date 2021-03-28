#pragma once

#include "Unit.h"

class Warrior:public Unit
{
protected:
    int armor = 0;
    int min_dmg = 0;
    int max_dmg = 0;
public:
    Warrior(const string &n, int a, int min, int max);

};




