#include "NewElectricitySystem.h"

NewElectricitySystem::NewElectricitySystem()
{
    voltage  = rand() % 20 + 210;
}

std::string NewElectricitySystem::matchWideSocket() const
{
    return std::to_string(voltage) + "V";
}
