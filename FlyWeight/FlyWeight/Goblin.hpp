#pragma once

#include "Unit.hpp"

class Goblin:public Unit
{
    static int id;
public:
    Goblin();
    void info()const override;
};
