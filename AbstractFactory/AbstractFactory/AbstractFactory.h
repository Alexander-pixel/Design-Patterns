#pragma once

#include "Wizard.h"
#include "Warrior.h"

class AbstractFactory
{
public:
    virtual Wizard* createWizard()const=0;
    virtual Warrior* createWarrior()const=0;
    virtual ~AbstractFactory();
};




