#pragma once

#include "PC.h"

class AbstratBuilder
{
protected:
    PC * pc= nullptr;
public:
    void createNewPc();
    PC*getPc()const;
    virtual void setMonitorResolution()=0;
    virtual void setProcessor()=0;
    virtual void setMemory()=0;
    virtual void setHdd()=0;
    virtual ~AbstratBuilder();
};




