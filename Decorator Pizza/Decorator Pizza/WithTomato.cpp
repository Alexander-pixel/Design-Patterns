#include "WithTomato.hpp"

WithTomato::WithTomato(Pizza* pt):Decorator(pt)
{
    value = 4;
}

void WithTomato::info()const
{
    Decorator::info();
    cout << "with tomato" << endl;
}

int WithTomato::getSum()
{
    return component->getSum()+value;
}
