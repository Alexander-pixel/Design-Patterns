#include "MainFactory.hpp"

PlannedTask* MainFactory::createPlanned()const
{
    Date date;
    int day, month;
    cout << "Enter the day and month of deadline: " << endl;
    cin >> day >> month;
    cin.ignore();
    
    string comment;
    cout << "Enter the comment for a task: " << endl;
    getline(cin, comment);
    
    string title;
    cout << "Enter the title for task: " << endl;
    getline(cin, title);
    
    date.setDay(day);
    date.setMonth(month);
    
    return new MainPlannedTask(date, comment, title);
}

UnplannedTask* MainFactory::createUnplanned()const
{
    string comment;
    cout << "Enter the comment for a task: " << endl;
    getline(cin, comment);
    
    string title;
    cout << "Enter the title for taskk: " << endl;
    getline(cin, title);
    
    return new MainUnplannedTask(comment, title);
}


