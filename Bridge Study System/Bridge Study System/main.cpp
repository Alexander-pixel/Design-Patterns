#include "Practice.hpp"
#include "Theory.hpp"
#include "Physics.hpp"
#include "Maths.hpp"
#include "ComputerScience.hpp"

int main()
{
    Physics ph;
    Maths maths;
    ComputerScience cs;
    
    Theory th;
    Practice pr;
    
    ph.setLessonType(&th);
    ph.ring_on_lesson();
    ph.info();
    ph.ring_on_break();
    cout << "//////////////////" << endl;
    maths.setLessonType(&pr);
    maths.ring_on_lesson();
    maths.info();
    maths.ring_on_break();
    cout << "//////////////////" << endl;
    cs.setLessonType(&pr);
    cs.ring_on_lesson();
    cs.info();
    cs.ring_on_break();
}
