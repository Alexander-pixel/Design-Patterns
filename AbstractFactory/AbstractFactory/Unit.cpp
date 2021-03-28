#include "Unit.h"

const string &Unit::getName() const
{
    return name;
}

void Unit::setName(const string &name)
{
    Unit::name = name;
}

Unit::Unit(const string &n)
{
    name = n;
}

Unit::~Unit()=default;
