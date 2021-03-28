#pragma once

#include "Subscriber.h"

class Reflector:public Subscriber
{
public:
    void handleEvent(const SupervisedString &str) override;
};
