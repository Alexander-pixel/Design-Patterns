#include"WithMilk.h"
#include"WithSugar.h"
#include"Coffee.h"

int main()
{
    Beverage* pt = new Coffee();
    pt = new WithSugar(pt);
    pt = new WithSugar(pt);
    pt = new WithMilk(pt);
    pt = new WithMilk(pt);
    pt = new WithSugar(pt);
    
    pt->info();
    cout << pt->getSum() << endl;
    delete pt;
}

