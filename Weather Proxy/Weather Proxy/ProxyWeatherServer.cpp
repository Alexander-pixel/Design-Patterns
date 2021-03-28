#include "ProxyWeatherServer.hpp"

void ProxyWeatherServer::connect()
{
    if(pt==nullptr)
    {
        if(rand()%10<3)
            pt = new RealWeatherServer();
    }
}

ProxyWeatherServer::~ProxyWeatherServer()
{
    delete pt;
}

Weather ProxyWeatherServer::getForecast()
{
    connect();
    Weather tmp;
    if(pt)
    {
        tmp = pt->getForecast();
        save(tmp);
        return tmp;
    }
    tmp = load();
    return tmp;
}

void ProxyWeatherServer::save(const Weather &obj)
{
    fstream fs;
    fs.open("/Users/aleksandrtkacenko/Desktop/Шаг/Паттерны проектирования/Weather Proxy/Weather.txt", ios::out);
    
    if(fs.is_open())
    {
        fs << obj.temperature << endl;
        fs << obj.precipitation << endl;
        fs << obj.windSpeed << endl;
        
        fs.close();
    }
}

Weather ProxyWeatherServer::load()
{
    Weather tmp;
    fstream fs;
    fs.open("/Users/aleksandrtkacenko/Desktop/Шаг/Паттерны проектирования/Weather Proxy/Weather.txt", ios::in);
    
    if(fs.is_open())
    {
        fs >> tmp.temperature >> tmp.precipitation >> tmp.windSpeed;
        fs.close();
    }
    
    return tmp;
}
