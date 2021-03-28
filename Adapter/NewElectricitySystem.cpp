#include "NewElectricitySystem.h"

NewElectricitySystem::NewElectricitySystem()
{
    voltage  = rand()%20+210;
}

 string NewElectricitySystem::matchWideSocket() const
{
    return to_string(voltage)+"V";
}
