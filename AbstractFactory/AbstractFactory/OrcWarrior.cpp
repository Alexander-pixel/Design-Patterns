#include "OrcWarrior.h"

void OrcWarrior::info() const
{
    cout<<"~~~||+++++||~~~"<<endl;
    cout<<"Race: Orc"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Armor: "<<armor<<endl;
    cout<<"Min Damage: "<<min_dmg<<endl;
    cout<<"Max Damage: "<<max_dmg<<endl;
    cout<<"~~~||+++++||~~~"<<endl;
}

OrcWarrior::OrcWarrior()
:Warrior("OrcWarrior", 50, 50, 100)
{

}
