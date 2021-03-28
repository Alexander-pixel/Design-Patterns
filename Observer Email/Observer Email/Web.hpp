#pragma once

#include "Subscriber.hpp"

class Web:public Subscriber
{
public:
    void handleEvent(const Email &str) override;
};
