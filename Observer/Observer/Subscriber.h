#pragma once

class SupervisedString;

#include <iostream>
using namespace std;

class Subscriber
{
public:
    virtual void handleEvent(const SupervisedString&)=0;
    virtual ~Subscriber();
};




