#include "Machine.hpp"
#include "OFF.hpp"


Machine::Machine()
{
    current = new OFF();
    cout << '\n';
}

void Machine::on()
{
    current->on(this);
}

void Machine::off()
{
    current->off(this);
}

void Machine::setCurrent(State *s)
{
    current = s;
}
