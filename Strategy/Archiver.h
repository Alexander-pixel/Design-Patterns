#pragma once

#include "AbstractCompression.h"
#include <iostream>
class Archiver
{
    AbstractCompression*strategy= nullptr;
public:
    Archiver();
    Archiver(AbstractCompression* pt);
    ~Archiver();
    void setStrategy(AbstractCompression* pt);
    void compress(const string&filename);
};




