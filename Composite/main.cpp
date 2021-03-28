#include "CustomerComponent.h"
#include "HeaderComponent.h"
#include "DocumentComponent.h"

using namespace std;

int main()
{

    auto doc = new DocumentComponent("ComposableDocument");
    auto header= new HeaderComponent();
    auto body = new DocumentComponent("Body");
    doc->addComponent(header);
    doc->addComponent(body);
    auto customer1 = new CustomerComponent(12);
    auto customer2 = new CustomerComponent(43);
    auto customer3 = new CustomerComponent(51);
    auto customers = new DocumentComponent("Customers");
    body->addComponent(customers);
    customers->addComponent(customer1);
    customers->addComponent(customer2);
    customers->addComponent(customer3);
    cout<<doc->gatherData()<<endl;
    delete doc;
    delete header;
    delete body;
    delete customer1;
    delete customer2;
    delete customer3;
    delete customers;

}