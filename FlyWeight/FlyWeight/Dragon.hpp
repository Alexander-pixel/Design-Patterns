#pragma once

#include "Unit.hpp"

class Dragon:public Unit
{
    static int id;
public:
    Dragon();
    void info()const override;
};
