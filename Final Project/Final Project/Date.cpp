#include "Date.hpp"

Date::Date()
{
    day = 0;
    month = 0;
}

Date::Date(int _day, int _month)
{
    if(_day>0 && _day<=31)
        day = _day;
    else
        day = 0;
    
    if(_month > 0 && _month <= 12)
        month = _month;
    else
        month = 0;
}

void Date::setDay(int _day)
{
    if(_day>0 && _day<=31)
        day = _day;
    else
        day = 0;
}

int Date::getDay()const
{
    return day;
}

void Date::setMonth(int _month)
{
    if(_month > 0 && _month <= 12)
        month = _month;
    else
        month = 0;
}

int Date::getMonth()const
{
    return month;
}
