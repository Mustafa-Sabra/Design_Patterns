

#include "Display.h"

void Display::update()
{
    // Display the temperature
    std::cout << "Current temperature: " << observable->getTemperature() << "°C" << std::endl;
}

Display::Display(std::shared_ptr<WeatherStation> observable) : observable(observable)
{
}
