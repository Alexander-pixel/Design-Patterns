#include "BuildingCompany.h"
#include "BrickWallCreator.h"
#include "ConcreteWallCreator.h"


int main()
{
    BuildingCompany bc;
    BrickWallCreator bw;
    ConcreteWallCreator cw;
    
    bc.setCreator(&bw);
    bc.buildFoundation();
    bc.buildRoom();
    bc.buildRoof();
    cout<<"~~~~~~~~~~~~~~~~"<<endl;
    bc.setCreator(&cw);
    bc.buildFoundation();
    bc.buildRoom();
    bc.buildRoof();
}
