#include "Maths.hpp"

void Maths::info()const
{
    getLessonType()->manage();
}

void Maths::ring_on_break()const
{
    cout << "The ring from the maths lesson on break." << endl;
}

void Maths::ring_on_lesson()const
{
    cout << "The ring from break on maths lesson." << endl;
}
