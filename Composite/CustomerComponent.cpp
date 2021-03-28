#include "CustomerComponent.h"

string CustomerComponent::gatherData()
{
    string tmp = "<Customer>\n";
    switch(id)
    {
        case 12:
            tmp+="Ivan Ivanov\n";
            break;
        case 43:
            tmp+="Vasya Pupkin\n";
            break;
        case 51:
            tmp+="Sveta Mashina\n";
            break;
        default:
            tmp+="Unknown\n";
    }
    tmp+="</Customer>\n";
    return tmp;
}

CustomerComponent::CustomerComponent(int id_)
{
    id = id_;
}
