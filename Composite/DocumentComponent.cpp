#include "DocumentComponent.h"

string DocumentComponent::gatherData()
{
    string tmp = "<";
    tmp+=name;
    tmp+=">\n";
    for(auto item:arr)
    {
        tmp+=item->gatherData();
        tmp+="\n";
    }
    tmp += "</";
    tmp+=name;
    tmp+=">\n";
    return tmp;
}

DocumentComponent::DocumentComponent(const string &n)
{
    name = n;
}

void DocumentComponent::addComponent(AbstractComponent *pt)
{
    arr.push_back(pt);
}
