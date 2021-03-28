#include "OrcFactory.h"

Wizard *OrcFactory::createWizard() const
{
    return new OrcWizard;
}

Warrior *OrcFactory::createWarrior() const
{
    return new OrcWarrior;
}
