#include"ElectricityConsumer.h"
#include"OldElectricitySystem.h"
#include"Adapter.h"
int main()
{
    srand(time(0));
    NewElectricitySystem newElectricitySystem;
    OldElectricitySystem oldElectricitySystem;
    Adapter adapter(oldElectricitySystem);
    ElectricityConsumer::chargeLaptop(adapter);
}