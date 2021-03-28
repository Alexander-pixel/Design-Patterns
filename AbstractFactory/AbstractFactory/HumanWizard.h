#pragma once

#include "Wizard.h"

class HumanWizard:public Wizard
{
public:
    HumanWizard();

    void info() const override;
};




