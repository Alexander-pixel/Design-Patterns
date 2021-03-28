#pragma once

#include "Lesson Type.hpp"

class Theory:public Lesson_Type
{
public:
    void manage()const override;
};

