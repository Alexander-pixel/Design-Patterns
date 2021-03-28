#pragma once

#include "Notification.hpp"


class PlannedTask:public Notification
{
    Date date;
public:
    PlannedTask(const Date &obj, const string & comment, const string & title);
    
    void setDate(const Date & obj);
    Date getDate()const;
    
    int getDay()const;
    int getMonth()const;
    
    void save(fstream &fs)override;
    void print()const override;
};
