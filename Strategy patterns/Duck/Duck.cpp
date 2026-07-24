#include "Duck.h"

void Duck::swim()
{
    std::cout << "All ducks float, even decoys!" << std::endl;
}
// Pure virtual function for displaying the duck
void Duck::performFly()
{
    flyBehavior->fly();
}
void Duck::performQuack()
{
    quackBehavior->quack();
}

void Duck::setFlyBehavior(FlyBehavior *fb)
{
    flyBehavior = fb;
}
void Duck::setQuackBehavior(QuackBehavior *qb)
{
    quackBehavior = qb;
}

MallardDuck::MallardDuck()
{
    flyBehavior = new FlyWithWings();
    quackBehavior = new Quack();
}
void MallardDuck::display()
{
    std::cout << "I'm a Mallard Duck!" << std::endl;
}

RubberDuck::RubberDuck()
{
    flyBehavior = new FlyNoWay();
    quackBehavior = new Squack();
}
void RubberDuck::display()
{
    std::cout << "I'm a Rubber Duck!" << std::endl;
}
