#ifndef SOFA_HPP
#define SOFA_HPP

#include <iostream>

class Sofa
{

public:
    virtual void sofaType() = 0;
    virtual ~Sofa() = default;
};

/*********************************************************** */

class ArtSofa : public Sofa
{
    virtual void sofaType() override;
    ~ArtSofa();
};

/************************************************************ */

class ClassicSofa : public Sofa
{
    virtual void sofaType() override;
    ~ClassicSofa();
};
#endif