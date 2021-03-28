#include "ProxyWeatherServer.hpp"
#include "time.h"
int main()
{
    srand(time(NULL));
    
    ProxyWeatherServer pws;
    Weather weather = pws.getForecast();
    cout << "Temperature: " << weather.temperature << endl;
    cout << "Precipitation: " << weather.precipitation << endl;
    cout << "Wind speed: " << weather.windSpeed << endl;
    cout << endl;
    
    
}
