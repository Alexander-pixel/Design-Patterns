#include "OfficePcBuilder.h"
#include "GamingPCBuilder.hpp"
#include "CustomPCBuilder.hpp"
#include "Director.h"

int main()
{
    OfficePcBuilder ob;
    Director shop;
    shop.setPcBuilder(&ob);
    shop.constructPC();
    PC * pa = shop.getNewPc();
    
    pa->print();
    delete pa;
    
    GamingPCBuilder gb;
    shop.setPcBuilder(&gb);
    shop.constructPC();
    pa = shop.getNewPc();
    
    pa->print();
    delete pa;
    
    CustomPCBuilder cb;
    shop.setPcBuilder(&cb);
    shop.constructPC();
    pa = shop.getNewPc();
    
    pa->print();
    delete pa;
    
}
