#pragma once

#include "State.hpp"
#include "ON.hpp"

class OFF: public State
{
public:
    OFF();
    ~OFF();
    
    void on(Machine *m);
};
