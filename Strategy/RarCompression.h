#pragma once

#include "AbstractCompression.h"

class RarCompression:public AbstractCompression
{
public:
    string compress(const string &filename) const override;
};




