#include "Archiver.h"

Archiver::Archiver()=default;
Archiver::Archiver(AbstractCompression *pt)
{
    strategy = pt;
}
void Archiver::setStrategy(AbstractCompression *pt)
{
    delete strategy;
    strategy = pt;
}
void Archiver::compress(const string &filename)
{
    cout<<strategy->compress(filename)<<endl;
}
Archiver::~Archiver()
{
    delete strategy;
}
