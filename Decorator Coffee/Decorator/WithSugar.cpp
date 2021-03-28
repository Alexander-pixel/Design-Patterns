#include "WithSugar.h"

WithSugar::WithSugar(Beverage *pt) : Decorator(pt)
{
    
}

void WithSugar::info()
{
    Decorator::info();
    cout<<"with sugar"<<endl;
}

int WithSugar::getValue()const
{
    return value;
}

int WithSugar::getSum()
{
    return component->getSum()+value;
}
