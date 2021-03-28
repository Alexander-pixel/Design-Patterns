#include "WithCheese.hpp"

WithCheese::WithCheese(Pizza* pt):Decorator(pt)
{
    value = 7;
}

void WithCheese::info()const
{
    Decorator::info();
    cout << "with cheese" << endl;
}

int WithCheese::getSum()
{
    return component->getSum()+value;
}
