#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class FlyWeightFactory
{
    static vector<string> pics;
public:
    static const string & getGoblinPicture();
    static const string & getDragonPicture();
};
