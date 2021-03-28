#include "OldElectricitySystem.h"

OldElectricitySystem::OldElectricitySystem()
{
    voltage = rand()%40+200;
}

string OldElectricitySystem::matchThinSocket() const
{
    return to_string(voltage)+"V";
}
