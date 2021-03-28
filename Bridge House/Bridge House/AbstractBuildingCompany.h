#pragma once

#include "AbstractWallCreator.h"

class AbstractBuildingCompany
{
    AbstractWallCreator* creator = nullptr;
public:
    virtual void buildFoundation()=0;
    virtual void buildRoom()=0;
    virtual void buildRoof()=0;
    virtual ~AbstractBuildingCompany();

    AbstractWallCreator *getCreator() const;

    void setCreator(AbstractWallCreator *creator);

};




