#include "RarCompression.h"

string RarCompression::compress(const string &filename) const
{
    int pos = filename.rfind(".");
    if(pos == -1)
        return filename+".rar";
    return filename.substr(0,pos)+".rar";
}
