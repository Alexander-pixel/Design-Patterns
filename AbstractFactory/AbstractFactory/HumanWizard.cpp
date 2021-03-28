#include "HumanWizard.h"

void HumanWizard::info() const
{
    cout<<"~~~\\/+-+-+\\/~~~"<<endl;
    cout<<"Race: Human"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"MP: "<<mp<<endl;
    cout<<"~~~\\/+-+-+\\/~~~"<<endl;
}

HumanWizard::HumanWizard()
:Wizard("HumanWizard", 200)
{

}
