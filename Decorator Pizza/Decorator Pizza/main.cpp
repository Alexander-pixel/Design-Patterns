#include "Pizza.hpp"
#include "WithCheese.hpp"
#include "WithTomato.hpp"
#include "WithPineapple.hpp"

int main()
{
    Pizza* pt = new SmallPizza();
    pt = new WithCheese(pt);
    pt = new WithTomato(pt);
    pt = new WithPineapple(pt);
    pt->info();
    cout << "Sum of the order: " << pt->getSum() << endl;
    
    pt = new BigPizza();
    pt = new WithPineapple(pt);
    pt = new WithCheese(pt);
    pt = new WithTomato(pt);
    cout << endl;
    pt->info();
    cout << "Sum of the order: " << pt->getSum() << endl;
    delete pt;

}
