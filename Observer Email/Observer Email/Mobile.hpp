#pragma once

#include "Subscriber.hpp"

class Mobile:public Subscriber
{
public:
    void handleEvent(const Email &str) override;
};
