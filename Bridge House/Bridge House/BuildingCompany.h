#pragma once


#include "AbstractBuildingCompany.h"

class BuildingCompany: public AbstractBuildingCompany
{
public:
    void buildFoundation() override;

    void buildRoom() override;

    void buildRoof() override;
};




