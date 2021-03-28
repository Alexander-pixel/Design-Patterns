#include "OfficePcBuilder.h"

void OfficePcBuilder::setMonitorResolution()
{
    pc->setMonitorResolution("1920x1080");
}

void OfficePcBuilder::setProcessor()
{
    pc->setProcessor("2.0 GHz");
}

void OfficePcBuilder::setMemory()
{
    pc->setMemory("4Gb");
}

void OfficePcBuilder::setHdd()
{
    pc->setHdd("500Gb");
}
