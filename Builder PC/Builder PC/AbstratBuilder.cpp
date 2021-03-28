#include "AbstratBuilder.h"

void AbstratBuilder::createNewPc()
{
    pc = new PC;
}

PC *AbstratBuilder::getPc() const
{
    return pc;
}

AbstratBuilder::~AbstratBuilder()=default;