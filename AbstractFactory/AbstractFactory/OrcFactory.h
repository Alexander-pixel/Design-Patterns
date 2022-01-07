#pragma once
#include "AbstractFactory.h"
#include "OrcWarrior.h"
#include "OrcWizard.h"

class OrcFactory: public AbstractFactory
{
public:
    Wizard *createWizard() const override;
    Warrior *createWarrior() const override;
};




