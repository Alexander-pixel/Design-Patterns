#include "HumanWarrior.h"

void HumanWarrior::info() const
{
    cout<<"~~~==*****==~~~"<<endl;
    cout<<"Race: Human"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Armor: "<<armor<<endl;
    cout<<"Min Damage: "<<min_dmg<<endl;
    cout<<"Max Damage: "<<max_dmg<<endl;
    cout<<"~~~==*****==~~~"<<endl;
}

HumanWarrior::HumanWarrior()
:Warrior("HumanWarrior", 100, 10, 50)
{

}
