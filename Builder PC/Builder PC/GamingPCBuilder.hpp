#pragma once

#include "AbstratBuilder.h"

class GamingPCBuilder:public AbstratBuilder
{
public:
    void setMonitorResolution() override;
    void setProcessor() override;
    void setMemory() override;
    void setHdd() override;
};
