#pragma once
#include<iostream>
#include<string>

using namespace std;


class Unit
{
protected:
    string name;
public:
    Unit(const string&n);
    virtual ~Unit();
    const string &getName() const;
    void setName(const string &name);
    virtual void info()const=0;

};




