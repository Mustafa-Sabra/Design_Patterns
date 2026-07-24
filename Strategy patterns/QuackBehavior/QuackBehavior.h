
#ifndef QUACK_BEHAVIOR_H
#define QUACK_BEHAVIOR_H

#include <iostream>

class QuackBehavior
{
public:
    virtual void quack() = 0;
};

class Quack : public QuackBehavior
{
public:
    void quack() override;
};

class Squack : public QuackBehavior
{
public:
    void quack() override;
};

class MuteQuack : public QuackBehavior
{
public:
    void quack() override;
};

#endif // QUACK_BEHAVIOR_H