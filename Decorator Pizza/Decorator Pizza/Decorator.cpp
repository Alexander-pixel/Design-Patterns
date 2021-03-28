#include "Decorator.hpp"

Decorator::Decorator(Pizza*pt)
{
    component = pt;
    value = 0;
}

void Decorator::info()const
{
    if(component)
        component->info();
}

Decorator::~Decorator()
{
    delete component;
}
