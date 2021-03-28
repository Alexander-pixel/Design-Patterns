#include "Parse.hpp"

vector<Unit*> Parse::parse()const
{
    vector<Unit*> tmp;
    for (int i = 0; i<500; i++)
    {
        if(rand()%2==0)
        {
            tmp.push_back(new Goblin());
        }
        else
        {
            tmp.push_back(new Dragon());
        }
    }
    return tmp;
}
