#include "PC.h"

const string &PC::getMonitorResolution() const
{
    return monitorResolution;
}
void PC::setMonitorResolution(const string &monitorResolution)
{
    PC::monitorResolution = monitorResolution;
}
const string &PC::getProcessor() const
{
    return processor;
}
void PC::setProcessor(const string &processor)
{
    PC::processor = processor;
}
const string &PC::getMemory() const
{
    return memory;
}

void PC::setMemory(const string &memory)
{
    PC::memory = memory;
}

const string &PC::getHdd() const
{
    return hdd;
}

void PC::setHdd(const string &hdd)
{
    PC::hdd = hdd;
}

void PC::print() const
{
    cout<<"Resolution: "<<monitorResolution<<endl;
    cout<<"CPU: "<<processor<<endl;
    cout<<"RAM: "<<memory<<endl;
    cout<<"HDD: "<<hdd<<endl;
}
