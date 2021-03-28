#include "Decorator.h"

Decorator::Decorator(Beverage *pt)
{
    component = pt;
}

void Decorator::info()
{
    if(component)
        component->info();
}

Decorator::~Decorator()
{
    //cout<<"~Decorator()"<<endl;
    delete component;
}

