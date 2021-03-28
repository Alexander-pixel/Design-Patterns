#pragma once

#include "PlannedTask.hpp"
#include "UnplannedTask.hpp"

class AbstractFactory
{
public:
    virtual PlannedTask* createPlanned()const=0;
    virtual UnplannedTask* createUnplanned()const=0;
    
    virtual ~AbstractFactory();
};
