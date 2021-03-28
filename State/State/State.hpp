#pragma once

#include "Machine.hpp"

class State
{
public:
    virtual void on(Machine *m);

    virtual void off(Machine *m);
};
