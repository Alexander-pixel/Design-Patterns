#pragma once
#include<iostream>
#include<string>

class Unit
{
protected:
    std::string name;
public:
    Unit(const std::string& n);
    virtual ~Unit();
    const std::string &getName() const;
    void setName(const std::string &name);
    virtual void info() const = 0;
};




