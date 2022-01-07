#include "OrcWarrior.h"

void OrcWarrior::info() const
{
    std::cout << "~~~||+++++||~~~" << std::endl;
    std::cout << "Race: Orc" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Armor: " << armor << std::endl;
    std::cout << "Min Damage: " << min_dmg << std::endl;
    std::cout << "Max Damage: " << max_dmg << std::endl;
    std::cout << "~~~||+++++||~~~" << std::endl;
}

OrcWarrior::OrcWarrior(): Warrior("OrcWarrior", 50, 50, 100)
{

}
