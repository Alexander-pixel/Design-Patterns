#include "SkiResortFacade.hpp"

int SkiResortFacade::haveGoodRest(int height, int weight, int feetSize, int skierLevel, int roomQuality)const
{
    int cost = 0;
    cost = skiRent.rentBoots(feetSize);
    cost += skiRent.rentPole(height);
    cost += skiRent.rentSki(weight, skierLevel);
    cost += skiResortTicketSystem.buyOneDayTicket();
    cost += hotelBookingSystem.bookRoom(roomQuality);
    return cost;
}

int SkiResortFacade::haveRestWithOwnSkies()const
{
    return skiResortTicketSystem.buyHalfDayTicket();
}
