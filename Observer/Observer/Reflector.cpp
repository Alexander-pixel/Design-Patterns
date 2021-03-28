#include "Reflector.h"
#include "SupervisedString.h"

void Reflector::handleEvent(const SupervisedString &st)
{
    cout<<st.getStr()<<endl;
}
