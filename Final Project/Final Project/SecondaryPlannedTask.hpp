#pragma once

#include "PlannedTask.hpp"

class SecondaryPlannedTask:public PlannedTask
{
public:
    SecondaryPlannedTask(const Date& obj, const string & comment, const string & title);
    void print()const override;
    void save(fstream &fs)override;
};
