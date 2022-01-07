#include "HumanWizard.h"

void HumanWizard::info() const
{
    std::cout << "~~~\\/+-+-+\\/~~~" << std::endl;
    std::cout << "Race: Human" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "MP: " << mp << std::endl;
    std::cout << "~~~\\/+-+-+\\/~~~" << std::endl;
}

HumanWizard::HumanWizard(): Wizard("HumanWizard", 200)
{

}
