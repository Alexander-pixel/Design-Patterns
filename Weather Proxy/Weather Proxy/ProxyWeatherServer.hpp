#pragma once

#include "RealWeatherServer.hpp"
#include <fstream>

class ProxyWeatherServer:public WeatherServer
{
    RealWeatherServer * pt = nullptr;
    
    void connect();
    void save(const Weather& obj);
    Weather load();
public:
    Weather getForecast()override;
    ~ProxyWeatherServer()override;
};
