#include "ElectricityConsumer.h"

void ElectricityConsumer::chargeLaptop(const AbstractNewElectricitySystem &obj)
{
    std::cout << "Laptop is charging. " << obj.matchWideSocket() << std::endl;
}
