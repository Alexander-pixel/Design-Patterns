#pragma once

class Date
{
    int day;
    int month;
public:
    Date();
    Date(int _day, int _month);
    
    void setDay(int _day);
    int getDay()const;
    
    void setMonth(int _month);
    int getMonth()const;
};
