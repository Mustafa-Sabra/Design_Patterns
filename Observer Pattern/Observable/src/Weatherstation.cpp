#include "WeatherStation.h"

void WeatherStation::addObserver(std::shared_ptr<IObserver> observer)
{
    observers.push_back(observer);
}
void WeatherStation::removebserver(std::shared_ptr<IObserver> observer)
{
    observers.erase(
        std::remove_if(observers.begin(), observers.end(),
                       [&](const std::weak_ptr<IObserver> &wptr)
                       {
                           auto sptr = wptr.lock();
                           return !sptr || sptr == observer;
                       }),
        observers.end());
}
void WeatherStation::notify()
{
    for (auto it = observers.begin(); it != observers.end();)
    {
        if (auto observer = it->lock())
        {
            observer->update();
            ++it;
        }
        else
        {
            // Remove expired weak_ptrs
            it = observers.erase(it);
        }
    }
}

void WeatherStation::setMeasurements(int newTemp)
{
    temperature = newTemp;
    notify();
}

int WeatherStation::getTemperature() const
{
    return temperature;
}