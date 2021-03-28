#pragma once

#include "AbstractFactory.hpp"

#include "MainPlannedTask.hpp"
#include "MainUnplannedTask.hpp"

class SecondaryFactory:public AbstractFactory
{
public:
    PlannedTask* createPlanned()const;
    UnplannedTask* createUnplanned()const;
    
};
