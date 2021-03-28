#include "Email.hpp"

void Email::notifySubscribers()
{
    for(auto item:subscribers)
    {
        item->handleEvent(*this);
    }
}

void Email::subscribe(Subscriber *pt)
{
    subscribers.push_back(pt);
}

void Email::unsubscribe(Subscriber *pt)
{
    subscribers.remove(pt);
}

const string &Email::getStr() const
{
    return str;
}

void Email::reset(const string &s)
{
    str = s;
    notifySubscribers();
}
