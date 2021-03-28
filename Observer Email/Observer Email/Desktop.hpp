#pragma once

#include "Subscriber.hpp"

class Desktop:public Subscriber
{
public:
    void handleEvent(const Email &str) override;
};
