#include "WithPineapple.hpp"

WithPineapple::WithPineapple(Pizza* pt):Decorator(pt)
{
    value = 9;
}

void WithPineapple::info()const
{
    Decorator::info();
    cout << "with pineapple" << endl;
}


int WithPineapple::getSum()
{
    return component->getSum()+value;
}
