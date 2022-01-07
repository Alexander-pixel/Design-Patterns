#include "Warrior.h"

Warrior::Warrior(const std::string &n, int a, int min, int max)
:Unit(n)
{
    armor = a;
    max_dmg = max;
    min_dmg = min;
}
