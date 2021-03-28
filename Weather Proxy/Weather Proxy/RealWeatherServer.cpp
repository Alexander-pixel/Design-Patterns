//
//  RealWeatherServer.cpp
//  Weather Proxy
//
//  Created by Александр Ткаченко on 22.02.2021.
//

#include "RealWeatherServer.hpp"

Weather RealWeatherServer::getForecast()
{
    Weather tmp;
    tmp.temperature = rand()%70-30;
    tmp.precipitation = rand()%2;
    tmp.windSpeed = rand()%15;
    return tmp;
}

