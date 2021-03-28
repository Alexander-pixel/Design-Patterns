#include "FlyWeightFactory.hpp"

vector<string> FlyWeightFactory::pics ={"Goblin.jpg", "Dragon.jpg"};

const string & FlyWeightFactory::getDragonPicture()
{
    return pics[1];
}

const string & FlyWeightFactory::getGoblinPicture()
{
    return pics[0];
}
