#include "Reflector.h"
#include "SupervisedString.h"
#include "Swapper.hpp"
#include "Counter.hpp"

int main()
{
    SupervisedString ss;
    Reflector a;
    Reflector b;
    Reflector c;
    Reflector d;
    ss.subscribe(&a);
    ss.subscribe(&b);
    ss.subscribe(&c);
    ss.subscribe(&d);
    ss.reset("Hello");
    ss.unsubscribe(&b);
    ss.reset("Bye");

    Swapper swap;
    ss.subscribe(&swap);
    ss.reset("You are great");
    
}
