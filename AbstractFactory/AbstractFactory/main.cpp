#include "HumanFactory.h"
#include "OrcFactory.h"

int main()
{
    AbstractFactory* af = new HumanFactory;
    Unit* arr[4];
    arr[0] = af->createWizard();
    arr[1] = af->createWarrior();
    delete af;
    af = new OrcFactory;
    arr[2] = af->createWarrior();
    arr[3] = af->createWizard();
    delete af;
    for (int i = 0; i<4; i++)
    {
        arr[i]->info();
        cout << endl;
    }
    for (auto unit : arr)
    {
        delete unit;
    }
    
}
