#include "MainPlannedTask.hpp"

MainPlannedTask::MainPlannedTask(const Date& obj, const string & comment, const string & title):PlannedTask(obj, comment, title)
{
    
}

void MainPlannedTask::print()const
{
    cout << "This is main planned task." << endl;
    cout << "Title: " << getTitle() << endl;
    cout << "Day: " << getDay() << endl;
    cout << "Month: " << getMonth() << endl;
    cout << "Comment: " << getComment() << endl;
}

void MainPlannedTask::save(fstream &fs)
{
    cout << "This task is main: " << endl;
    PlannedTask::save(fs);
}
