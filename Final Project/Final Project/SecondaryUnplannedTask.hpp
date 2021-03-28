#pragma once

#include "UnplannedTask.hpp"

class SecondaryUnplannedTask:public UnplannedTask
{
public:
    SecondaryUnplannedTask(const string & message, const string & title);
    void print()const override;
    void save(fstream &fs)override;
};
