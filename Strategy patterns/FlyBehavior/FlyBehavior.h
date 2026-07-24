#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

#include <iostream>

class FlyBehavior
{
public:
    virtual void fly() = 0; // Pure virtual function
};

class FlyWithWings : public FlyBehavior
{
public:
    void fly() override;
};

class FlyNoWay : public FlyBehavior
{
public:
    void fly() override;
};

#endif // FLYBEHAVIOR_H