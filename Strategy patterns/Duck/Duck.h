#ifndef _DUCK_H
#define _DUCK_H

#include <iostream>
#include "../FlyBehavior/FlyBehavior.h"
#include "../QuackBehavior/QuackBehavior.h"

class Duck
{
public:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;

    void swim();
    virtual void display() = 0; // Pure virtual function for displaying the duck
    void performFly();
    void performQuack();

    void setFlyBehavior(FlyBehavior *fb);
    void setQuackBehavior(QuackBehavior *qb);
};

class MallardDuck : public Duck
{

public:
    MallardDuck();
    void display() override;
};

class RubberDuck : public Duck
{

public:
    RubberDuck();
    void display() override;
};

#endif // _DUCK_H