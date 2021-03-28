#pragma once

#include "PlannedTask.hpp"

class MainPlannedTask:public PlannedTask
{
public:
    MainPlannedTask(const Date& obj, const string & comment, const string & title);
    void print()const override;
    void save(fstream &fs)override;
};
