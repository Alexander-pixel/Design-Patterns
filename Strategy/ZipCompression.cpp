#include "ZipCompression.h"

string ZipCompression::compress(const string &filename) const
{
    int pos = filename.rfind(".");
    if(pos == -1)
        return filename+".zip";
    return filename.substr(0,pos)+".zip";

}
