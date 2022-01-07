#include "OrcWizard.h"

void OrcWizard::info() const
{
    std::cout << "---==*+*+*==---" << std::endl;
    std::cout << "Race: Orc" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "MP: " << mp << std::endl;
    std::cout << "---==*+*+*==---" << std::endl;
}

OrcWizard::OrcWizard() :Wizard("OrcWizard",100)
{

}
