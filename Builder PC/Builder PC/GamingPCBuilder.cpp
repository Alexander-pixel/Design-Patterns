#include "GamingPCBuilder.hpp"

void GamingPCBuilder::setMonitorResolution()
{
    pc->setMonitorResolution("2560x1440");
}

void GamingPCBuilder::setProcessor()
{
    pc->setProcessor("3.2 GHz");
}

void GamingPCBuilder::setMemory()
{
    pc->setMemory("16 Gb");
}

void GamingPCBuilder::setHdd()
{
    pc->setHdd("1000 Gb");
}
