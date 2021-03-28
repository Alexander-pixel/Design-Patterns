#pragma once

class Email;

#include <iostream>
using namespace std;

class Subscriber
{
public:
    virtual void handleEvent(const Email&)=0;
    virtual ~Subscriber();
};
