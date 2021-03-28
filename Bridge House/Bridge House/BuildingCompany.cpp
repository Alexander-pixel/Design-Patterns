#include "BuildingCompany.h"

void BuildingCompany::buildFoundation()
{
    cout<<"Foundation is built"<<endl;
}

void BuildingCompany::buildRoom()
{
    getCreator()->buildWall();
    getCreator()->buildWallWithDoor();
    getCreator()->buildWall();
    getCreator()->buildWallWithWindow();
}

void BuildingCompany::buildRoof()
{
    cout<<"Roof is done"<<endl;
}
