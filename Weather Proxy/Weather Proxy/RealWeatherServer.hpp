#pragma once

#include "WeatherServer.hpp"

class RealWeatherServer:public WeatherServer
{
public:
    Weather getForecast()override;
};
