#include "OldElectricitySystem.h"

OldElectricitySystem::OldElectricitySystem()
{
    voltage = rand() % 40 + 200;
}

std::string OldElectricitySystem::matchThinSocket() const
{
    return std::to_string(voltage) + "V";
}
