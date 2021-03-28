#include "PlannedTask.hpp"

PlannedTask::PlannedTask(const Date &obj, const string & comment, const string & title):Notification(comment, title)
{
    date = obj;
}

void PlannedTask::setDate(const Date &obj)
{
    date = obj;
}

Date PlannedTask::getDate()const
{
    return date;
}

int PlannedTask::getDay()const
{
    return date.getDay();
}

int PlannedTask::getMonth()const
{
    return date.getMonth();
}

void PlannedTask::save(fstream &fs)
{
    fs << "Title: " << getTitle() << endl;
    fs << "Comment: " << comment << endl;
    fs << "Day: " << date.getDay() << endl;
    fs << "Month: " << date.getMonth() << endl;
}

void PlannedTask::print()const
{
    cout << "Title: " << getTitle() << endl;
    cout << "Comment: " << comment << endl;
    cout << "Day: " << date.getDay() << endl;
    cout << "Month: " << date.getMonth() << endl;
}
