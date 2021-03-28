#include "Physics.hpp"

void Physics::info()const
{
    getLessonType()->manage();
}

void Physics::ring_on_break()const
{
    cout << "The ring from the physics lesson on break." << endl;
}

void Physics::ring_on_lesson()const
{
    cout << "The ring from break on physics lesson." << endl;
}
