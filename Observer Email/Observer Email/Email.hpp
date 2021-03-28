#pragma once

#include <iostream>
#include <string>
#include <list>
#include "Subscriber.hpp"
using namespace std;

class Email
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
