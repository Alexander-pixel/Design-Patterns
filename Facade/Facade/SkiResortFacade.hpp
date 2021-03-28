#pragma once

#include "HotelBookingSystem.hpp"
#include "SkiRent.hpp"
#include "SkiResortTicketSystem.hpp"

class SkiResortFacade
{
    SkiRent skiRent;
    SkiResortTicketSystem skiResortTicketSystem;
    HotelBookingSystem hotelBookingSystem;
public:
    int haveGoodRest(int height, int weight, int feetSize, int skierLevel, int roomQuality)const;
    int haveRestWithOwnSkies()const;
};
