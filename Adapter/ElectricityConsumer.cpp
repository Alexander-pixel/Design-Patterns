#include "ElectricityConsumer.h"

void ElectricityConsumer::chargeLaptop(const AbstractNewElectricitySystem &obj)
{
        cout<<"Laptop is charging. "<<obj.matchWideSocket()<<endl;
}
