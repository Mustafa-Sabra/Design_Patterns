#include "houseBlend.h"

HouseBlend::HouseBlend()
{
    // Initialize the description of the beverage
    description = "House Blend Coffee";
}

int HouseBlend::cost() const
{
    return 150; // Example cost for House Blend
}