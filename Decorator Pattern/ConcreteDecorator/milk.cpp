#include "milk.h"

string Milk::getDescription() const
{

    return (beverage->getDescription() + " with Milk");
}

int Milk::cost() const
{
    return beverage->cost() + 10; // Assuming milk adds a cost of 10
}