#pragma once

#include "Weather.hpp"

#include <iostream>
#include <string>
using namespace std;

class WeatherServer
{
public:
    virtual Weather getForecast()=0;
    virtual ~WeatherServer();
};
