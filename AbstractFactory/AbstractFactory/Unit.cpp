#include "Unit.h"

const std::string &Unit::getName() const
{
    return name;
}

void Unit::setName(const std::string &name)
{
    Unit::name = name;
}

Unit::Unit(const std::string &n)
{
    name = n;
}

Unit::~Unit() = default;
