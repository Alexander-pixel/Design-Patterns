#pragma once

#include "FlyWeightFactory.hpp"

class Unit
{
protected:
    string name;
    int hp;
    const string & img;
public:
    Unit(const string& n, int hp_, const string & image);
    virtual void info()const=0;
    virtual ~Unit();
};
