#pragma once

#include "UnplannedTask.hpp"

class MainUnplannedTask:public UnplannedTask
{
public:
    MainUnplannedTask(const string & message, const string & title);
    void print()const override;
    void save(fstream &fs)override;
};
