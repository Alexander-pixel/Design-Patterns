#pragma once

#include "AbstractCompression.h"

class ZipCompression:public AbstractCompression
{
public:
    string compress(const string &filename) const override;
};




