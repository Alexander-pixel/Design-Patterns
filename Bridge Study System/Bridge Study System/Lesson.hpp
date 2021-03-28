#pragma once

#include "Lesson Type.hpp"

#include <iostream>
#include <string>
using namespace std;

class Lesson
{
    Lesson_Type * lt = nullptr;
public:
    virtual void ring_on_lesson()const = 0;
    virtual void ring_on_break()const = 0;
    virtual void info()const = 0;
    virtual ~Lesson();
    
    void setLessonType(Lesson_Type* lt);
    Lesson_Type* getLessonType()const;
};
