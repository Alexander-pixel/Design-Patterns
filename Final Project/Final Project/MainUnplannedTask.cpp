#include "MainUnplannedTask.hpp"

MainUnplannedTask::MainUnplannedTask(const string & message, const string & title):UnplannedTask(message, title)
{
    
}

void MainUnplannedTask::print()const
{
    cout << "This is main unplanned task." << endl;
    cout << "Title: " << getTitle() << endl;
    cout << "Comment: " << getComment() << endl;
}

void MainUnplannedTask::save(fstream &fs)
{
    cout << "This task is main: " << endl;
    UnplannedTask::save(fs);
}
