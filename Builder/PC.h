#pragma once

#include <iostream>
#include <string>
using namespace std;

class PC
{
    string monitorResolution;
    string processor;
    string memory;
    string hdd;
public:
    void print()const;
    const string &getMonitorResolution() const;
    void setMonitorResolution(const string &monitorResolution);
    const string &getProcessor() const;
    void setProcessor(const string &processor);
    const string &getMemory() const;
    void setMemory(const string &memory);
    const string &getHdd() const;
    void setHdd(const string &hdd);
};




