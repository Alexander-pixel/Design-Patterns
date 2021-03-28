#include "Director.h"

void Director::setPcBuilder(AbstratBuilder *b)
{
    builder = b;
}

PC *Director::getNewPc() const
{
    return builder->getPc();
}

void Director::constructPC()
{
    builder->createNewPc();
    builder->setMonitorResolution();
    builder->setProcessor();
    builder->setMemory();
    builder->setHdd();
    cout << endl;
}
