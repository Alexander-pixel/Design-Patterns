#include "Web.hpp"

#include "Email.hpp"

void Web::handleEvent(const Email &st)
{
    cout<<st.getStr()<<endl;
}
