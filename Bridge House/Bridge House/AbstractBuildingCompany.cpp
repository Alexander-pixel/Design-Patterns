#include "AbstractBuildingCompany.h"

AbstractWallCreator *AbstractBuildingCompany::getCreator() const
{
    return creator;
}

void AbstractBuildingCompany::setCreator(AbstractWallCreator *creator)
{
    AbstractBuildingCompany::creator = creator;
}

AbstractBuildingCompany::~AbstractBuildingCompany()=default;
