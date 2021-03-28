#include "Mobile.hpp"
#include "Web.hpp"
#include "Desktop.hpp"
#include "Email.hpp"

int main()
{
    Mobile m1, m2, m3;
    Web w1, w2, w3;
    Desktop d1, d2;
    
    Email email;
    email.subscribe(&m1);
    email.subscribe(&m2);
    email.subscribe(&m3);
    
    email.subscribe(&w1);
    email.subscribe(&w2);
    email.subscribe(&w3);
    
    email.subscribe(&d1);
    email.subscribe(&d2);
    
    email.reset("Hello, users! New post alert!");
    cout << endl;
    email.unsubscribe(&w2);
    email.reset("New alert!");
    
}
