#ifndef WEATHERSTATION_H
#define WEATHERSTATION_H

#include "IObservable.h"
#include "IObserver.h"
#include <memory>
#include <algorithm>

class WeatherStation : public IObservable
{
private:
    int temperature; // Temperature in degrees Celsius
public:
    void addObserver(std::shared_ptr<IObserver> observer) override;
    void removebserver(std::shared_ptr<IObserver> observer) override;
    void notify() override;

    void setMeasurements(int newTemp);

    int getTemperature() const;
};

#endif