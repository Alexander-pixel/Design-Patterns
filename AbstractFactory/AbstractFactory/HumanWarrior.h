#pragma once

#include "Warrior.h"

class HumanWarrior:public Warrior
{
public:
    HumanWarrior();
    void info() const override;
};




