#pragma once

#include <iostream>
using namespace std;

class Lesson_Type
{
public:
    virtual void manage()const = 0;
    virtual ~Lesson_Type();
};
