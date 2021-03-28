#include "Swapper.hpp"
#include "SupervisedString.h"

void Swapper::handleEvent(const SupervisedString &st)
{
    string buf = st.getStr();
    
    buf.find('y');
    
    
    for (int i = 0; i<buf.size(); i++)
    {
        if(buf[i] == 'y' || buf[i] == 'Y')
        {
            buf.resize(buf.size()+2);
            buf[i] = 'w';
            buf[i+1] = 'a';
            buf[i+2] = 'i';
        }
    }
    
    cout << buf << endl;
}
