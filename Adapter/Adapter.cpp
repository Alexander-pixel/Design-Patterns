#include "Adapter.h"

string Adapter::matchWideSocket() const
{
    return ols.matchThinSocket();
}

Adapter::Adapter(OldElectricitySystem &o):ols(o)
{

}
