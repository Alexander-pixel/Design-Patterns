#pragma once

#include "AbstratBuilder.h"

class CustomPCBuilder:public AbstratBuilder
{
public:
    void setMonitorResolution() override;
    void setProcessor() override;
    void setMemory() override;
    void setHdd() override;
};
