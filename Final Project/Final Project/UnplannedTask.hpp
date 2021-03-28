#pragma once

#include "Notification.hpp"

class UnplannedTask:public Notification
{
public:
    UnplannedTask(const string & message, const string & title);
    void save(fstream &fs) override;
    void print()const override;
};
