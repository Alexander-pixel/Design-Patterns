#include "Dragon.hpp"

int Dragon::id = 1;

void Dragon::info()const
{
    cout << "Dragon" << endl;
    cout << "Name: " << name << endl;
    cout << "HP: " << hp << endl;
    cout << "Image: " << img << endl;
}

Dragon::Dragon():Unit("Dragon_"+to_string(id++), 100, FlyWeightFactory::getDragonPicture())
{
    
}
