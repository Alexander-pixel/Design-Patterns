#pragma once

#include "State.hpp"
#include "OFF.hpp"

class ON: public State
{
public:
    ON();
    ~ON();

    void off(Machine *m);
};
