#include "SkiResortFacade.hpp"

int main()
{
    SkiResortFacade facade;
    cout << facade.haveRestWithOwnSkies() << endl;
    cout << facade.haveGoodRest(180, 80, 42, 4, 2) << endl;
    
    HotelBookingSystem hbs;
    cout << hbs.bookRoom(3) << endl;
}
