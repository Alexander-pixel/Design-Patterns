#include "ComputerScience.hpp"

void ComputerScience::info()const
{
    getLessonType()->manage();
}

void ComputerScience::ring_on_break()const
{
    cout << "The ring from the computer science lesson on break." << endl;
}

void ComputerScience::ring_on_lesson()const
{
    cout << "The ring from break on computer science lesson." << endl;
}
