#include "Unit.hpp"

Unit::Unit(const string& n, int hp_, const string & image):img(image)
{
    name = n;
    hp = hp_;
}

Unit::~Unit()=default;
