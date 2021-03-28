#pragma once

#include <string>
using namespace std;
class AbstractCompression
{
public:
    virtual string compress(const string&filename) const = 0;
    virtual ~AbstractCompression();
};




