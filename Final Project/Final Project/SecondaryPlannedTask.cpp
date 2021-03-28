#include "SecondaryPlannedTask.hpp"

SecondaryPlannedTask::SecondaryPlannedTask(const Date& obj, const string & comment, const string & title):PlannedTask(obj, comment, title)
{
    
}

void SecondaryPlannedTask::print()const
{
    cout << "This is secondary planned task." << endl;
    cout << "Title: " << getTitle() << endl;
    cout << "Day: " << getDay() << endl;
    cout << "Month: " << getMonth() << endl;
    cout << "Comment: " << getComment() << endl;
}

void SecondaryPlannedTask::save(fstream &fs)
{
    cout << "This task is secondary: " << endl;
    PlannedTask::save(fs);
}
