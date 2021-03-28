#include "Machine.hpp"

//typedef void (Machine::*machine_method)();
int main()
{
    Machine fsm;

    int num;
    do
    {
        cin>>num;
        switch(num)
        {
            case 0:
                fsm.off();
                break;
            case 1:
                fsm.on();
        }

    }while (num!=2);


    /*Machine fsm;
    machine_method ptr[2];
    ptr[0]=&Machine::off;
    ptr[1]=&Machine::on;

    int num;
    while (true)
    {
        cout << "Enter 0/1: ";
        cin >> num;
        (fsm.*ptr[num])();
    }*/
}
