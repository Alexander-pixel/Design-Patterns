#include "HotelBookingSystem.hpp"

int HotelBookingSystem::bookRoom(int quality)const
{
    switch (quality)
    {
        case 1:
            return 250;
        case 2:
            return 500;
        case 3:
            return 900;
    }
    return 0;
}
