#include "Notification.hpp"

Notification::~Notification() = default;

void Notification::setComment(const string &_comment)
{
    comment = _comment;
}

const string & Notification::getComment()const
{
    return comment;
}

const string & Notification::getTitle()const
{
    return title;
}

void Notification::setTitle(const string &_title)
{
    title = _title;
}

Notification::Notification(const string & _comment, const string& _title)
{
    comment = _comment;
    title = _title;
}
