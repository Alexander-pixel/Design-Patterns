#pragma once

#include "Date.hpp"

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Notification
{
protected:
    string comment;
    string title;
public:
    Notification(const string & _comment, const string&);
    
    virtual ~Notification();
    
    void setComment(const string & _comment);
    const string & getComment()const;
    
    void setTitle(const string & _title);
    const string & getTitle()const;
    
    virtual void save(fstream& fs)=0;
    virtual void print()const=0;
    
};
