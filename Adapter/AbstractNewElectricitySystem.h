#pragma once
#include <iostream>
#include <string>

class AbstractNewElectricitySystem
{
public:
   virtual std::string matchWideSocket() const = 0;
   virtual ~AbstractNewElectricitySystem();
};




