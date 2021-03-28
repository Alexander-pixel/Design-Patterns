#include "WithMilk.h"

WithMilk::WithMilk(Beverage *pt) : Decorator(pt)
{
    
}

void WithMilk::info()
{
   Decorator::info();
   cout<<"with milk"<<endl;
}

int WithMilk::getValue()const
{
    return value;
}

int WithMilk::getSum()
{
    return component->getSum()+value;
}
