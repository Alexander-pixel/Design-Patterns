#include "Goblin.hpp"

int Goblin::id = 1;

void Goblin::info()const
{
    cout << "Goblin" << endl;
    cout << "Name: " << name << endl;
    cout << "HP: " << hp << endl;
    cout << "Image: " << img << endl;
}

Goblin::Goblin():Unit("Goblin_"+to_string(id++), 15, FlyWeightFactory::getGoblinPicture())
{
    
}
