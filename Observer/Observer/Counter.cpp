#include "Counter.hpp"
#include "SupervisedString.h"

void Counter::handleEvent(const SupervisedString &st)
{
    cout << st.getStr().size() << endl;
}
