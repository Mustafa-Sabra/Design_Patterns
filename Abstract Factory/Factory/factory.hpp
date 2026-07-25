#ifndef FACTORY_HPP
#define FACTORY_HPP

#include <iostream>
#include "../Chair/chair.hpp"
#include "../Sofa/sofa.hpp"

class Factory
{

public:
    virtual Chair *createChair() = 0;
    virtual Sofa *createSofa() = 0;
    ~Factory() = default;
};
/************************************************************************ */
class ArtFactory : public Factory
{
public:
    Chair *createChair() override;
    Sofa *createSofa() override;
    ~ArtFactory();
};
/************************************************************************************ */
class ClassicFactory : public Factory
{
public:
    Chair *createChair() override;
    Sofa *createSofa() override;
    ~ClassicFactory();
};

#endif