#include "HumanFactory.h"

Wizard *HumanFactory::createWizard() const
{
    return new HumanWizard;
}

Warrior *HumanFactory::createWarrior() const
{
    return new HumanWarrior;
}
