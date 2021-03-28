#include "SecondaryUnplannedTask.hpp"

SecondaryUnplannedTask::SecondaryUnplannedTask(const string & message, const string & title):UnplannedTask(message, title)
{
    
}

void SecondaryUnplannedTask::print()const
{
    cout << "This is secondary unplanned task." << endl;
    cout << "Title: " << getTitle() << endl;
    cout << "Comment: " << getComment() << endl;
}

void SecondaryUnplannedTask::save(fstream &fs)
{
    cout << "This task is secondary: " << endl;
    UnplannedTask::save(fs);
}
