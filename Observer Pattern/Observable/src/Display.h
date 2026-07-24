#ifndef TEMPERATUREDISPLAY_H
#define TEMPERATUREDISPLAY_H

#include "IObserver.h"
#include <iostream>

#include "WeatherStation.h"

class Display : public IObserver
{
    std::shared_ptr<WeatherStation> observable;

public:
    // Constructor
    Display(std::shared_ptr<WeatherStation> observable);
    virtual void update() override;
};

#endif // TEMPERATUREDISPLAY_H