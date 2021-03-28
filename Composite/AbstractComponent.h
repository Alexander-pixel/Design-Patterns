#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class AbstractComponent
{
public:
    virtual string gatherData()=0;
    virtual ~AbstractComponent();
};




