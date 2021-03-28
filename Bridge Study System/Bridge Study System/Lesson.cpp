#include "Lesson.hpp"


void Lesson::setLessonType(Lesson_Type* lt)
{
    Lesson::lt = lt;
}

Lesson_Type* Lesson::getLessonType()const
{
    return lt;
}

Lesson::~Lesson()=default;
