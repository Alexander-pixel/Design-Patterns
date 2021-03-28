#pragma once

#include <iostream>
#include <string>
#include <list>
#include "Subscriber.h"
using namespace std;
class SupervisedString
{
    string str;
    list<Subscriber*> subscribers;
    void notifySubscribers();
public:
    void subscribe(Subscriber*pt);
    void unsubscribe(Subscriber*pt);
    const string &getStr()const;
    void reset(const string&s);
};
