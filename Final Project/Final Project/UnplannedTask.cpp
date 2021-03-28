#include "UnplannedTask.hpp"

UnplannedTask::UnplannedTask(const string & message, const string & title):Notification(message, title)
{
    
}

void UnplannedTask::save(fstream &fs)
{
    fs << "Title: " << getTitle() << endl;
    fs << "Comment: " << comment << endl;
}

void UnplannedTask::print()const
{
    cout << "Title: " << getTitle() << endl;
    cout << "Comment: " << comment << endl;
}
