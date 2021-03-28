#pragma once

#include <iostream>
using namespace std;

class State;
class Machine
{
    State *current;
public:
    Machine();
    void setCurrent(State *s);
    void on();
    void off();
};
