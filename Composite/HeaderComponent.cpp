#include "HeaderComponent.h"
#include <ctime>
HeaderComponent::HeaderComponent()
{
    char buf[50];
    auto seconds = time(0);
    tm*timeinfo = localtime(&seconds);
    sprintf(buf,"%2i:%2i:%2i\n",timeinfo->tm_hour,
            timeinfo->tm_min,timeinfo->tm_sec);
    data = buf;
}

string HeaderComponent::gatherData()
{
    string tmp = "<Header>\n";
    tmp+=data;
    tmp+="</Header>\n";
    return tmp;
}
