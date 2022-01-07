#include "HumanWarrior.h"

void HumanWarrior::info() const
{
    std::cout << "~~~==*****==~~~" << std::endl;
    std::cout << "Race: Human" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Armor: " << armor << std::endl;
    std::cout << "Min Damage: " << min_dmg << std::endl;
    std::cout << "Max Damage: " << max_dmg << std::endl;
    std::cout << "~~~==*****==~~~" << std::endl;
}

HumanWarrior::HumanWarrior(): Warrior("HumanWarrior", 100, 10, 50)
{

}
