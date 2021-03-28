#pragma once

#include "Subscriber.h"

class Counter:public Subscriber
{
public:
    void handleEvent(const SupervisedString &st) override;
};
