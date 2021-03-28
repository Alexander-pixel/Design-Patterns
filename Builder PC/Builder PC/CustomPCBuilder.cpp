#include "CustomPCBuilder.hpp"

void CustomPCBuilder::setMonitorResolution()
{
    string resol;
    cout << "Enter the monitor resolutation you want: " << endl;
    getline(cin, resol);
    pc->setMonitorResolution(resol);
}

void CustomPCBuilder::setProcessor()
{
    string process;
    cout << "Enter the processor you want: " << endl;
    getline(cin, process);
    pc->setProcessor(process);
}

void CustomPCBuilder::setMemory()
{
    string memory;
    cout << "Enter the memory you want: " << endl;
    getline(cin, memory);
    pc->setMemory(memory);
}

void CustomPCBuilder::setHdd()
{
    string hdd;
    cout << "Enter the hdd you want: " << endl;
    getline(cin, hdd);
    pc->setHdd(hdd);
}
