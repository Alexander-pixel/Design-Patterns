#include "SupervisedString.h"

void SupervisedString::notifySubscribers()
{
    for(auto item:subscribers)
    {
        item->handleEvent(*this);
    }
}

void SupervisedString::subscribe(Subscriber *pt)
{
    subscribers.push_back(pt);
}

void SupervisedString::unsubscribe(Subscriber *pt)
{
    subscribers.remove(pt);
}

const string &SupervisedString::getStr() const
{
    return str;
}

void SupervisedString::reset(const string &s)
{
    str = s;
    notifySubscribers();
}
