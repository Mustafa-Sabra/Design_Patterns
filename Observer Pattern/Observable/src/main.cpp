#include <iostream>
#include "Weatherstation.h"
#include "Display.h"
#include <memory>

int main()
{
    auto weatherPtr = std::make_shared<WeatherStation>(); // Create a shared pointer to WeatherStation

    std::shared_ptr<Display> display1_ptr = std::make_shared<Display>(weatherPtr);
    std::shared_ptr<Display> display2_ptr = std::make_shared<Display>(weatherPtr);
    std::shared_ptr<Display> display3_ptr = std::make_shared<Display>(weatherPtr);

    weatherPtr->addObserver(display1_ptr);
    weatherPtr->addObserver(display2_ptr);
    weatherPtr->addObserver(display3_ptr);

    weatherPtr->setMeasurements(25); // Set initial temperature

    weatherPtr->setMeasurements(90); // Set   temperature

    weatherPtr->removebserver(display3_ptr); // Remove another observer

    weatherPtr->setMeasurements(100); // Set   temperature

    weatherPtr->removebserver(display2_ptr); // Remove last observer

    weatherPtr->setMeasurements(5); // Set   temperature

    weatherPtr->removebserver(display1_ptr); // Remove last observer

    weatherPtr->setMeasurements(2); // Set   temperature

    return 0;
}