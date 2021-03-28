#pragma once

#include <iostream>
#include <string>
using namespace std;

class SkiRent
{
public:
    int rentBoots(int feetSize)const;
    int rentSki(int weight, int skierLevel)const;
    int rentPole(int height)const;
};
