#include "Desktop.hpp"
#include "Email.hpp"

void Desktop::handleEvent(const Email &st)
{
    cout<<st.getStr()<<endl;
}
