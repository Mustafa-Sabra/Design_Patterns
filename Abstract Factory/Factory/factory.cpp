#include "factory.hpp"

Chair *ArtFactory::createChair()
{
    return new ArtChair();
}
Sofa *ArtFactory::createSofa()
{
    return new ArtSofa();
}
ArtFactory::~ArtFactory()
{
    std::cout << "ArtFactory destructor called" << std::endl;
}
/******************************************************************************* */
Chair *ClassicFactory::createChair()
{
    return new ClassicChair();
}
Sofa *ClassicFactory::createSofa()
{
    return new ClassicSofa();
}
ClassicFactory::~ClassicFactory()
{
    std::cout << "ClassicFactory destructor called" << std::endl;
}