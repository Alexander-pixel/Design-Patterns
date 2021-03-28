#include "OfficePcBuilder.h"
#include "Director.h"
int main()
{
    OfficePcBuilder ob;
    Director shop;
    shop.setPcBuilder(&ob);
    shop.constructPC();
    PC* pa = shop.getNewPc();
    pa->print();
    delete pa;
}

