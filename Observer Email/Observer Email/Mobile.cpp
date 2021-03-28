#include "Mobile.hpp"
#include "Email.hpp"

void Mobile::handleEvent(const Email &st)
{
    cout<<st.getStr()<<endl;
}
