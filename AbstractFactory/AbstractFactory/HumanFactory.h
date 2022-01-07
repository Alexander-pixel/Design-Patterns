#pragma once
#include "AbstractFactory.h"
#include "HumanWizard.h"
#include "HumanWarrior.h"

class HumanFactory: public AbstractFactory
{
public:
    Wizard *createWizard() const override;
    Warrior *createWarrior() const override;
};




