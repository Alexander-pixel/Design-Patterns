#include "OrcWizard.h"

void OrcWizard::info() const
{
    cout<<"---==*+*+*==---"<<endl;
    cout<<"Race: Orc"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"MP: "<<mp<<endl;
    cout<<"---==*+*+*==---"<<endl;
}

OrcWizard::OrcWizard()
:Wizard("OrcWizard",100)
{

}
