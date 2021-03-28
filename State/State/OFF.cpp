#include "OFF.hpp"

OFF::OFF()
{
    cout << "   OFF-ctor ";
};

OFF::~OFF()
{
    cout << "   dtor-OFF\n";
};

void OFF::on(Machine *m)
{
    cout << "   going from OFF to ON";
    m->setCurrent(new ON());
    delete this;
}
