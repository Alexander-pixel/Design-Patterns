#pragma once

#include "Subscriber.h"

class Swapper:public Subscriber
{
public:
    void handleEvent(const SupervisedString &str) override;
};

