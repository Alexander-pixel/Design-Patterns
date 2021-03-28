#pragma once

#include "Lesson.hpp"

class Maths:public Lesson
{
public:
    void info()const override;
    void ring_on_lesson()const override;
    void ring_on_break()const override;
};
