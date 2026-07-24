#include "main.h"

int main(void)
{
    Duck *d = new MallardDuck();
    d->display();
    d->performFly();
    d->performQuack();
    d->setFlyBehavior(new FlyNoWay());
    d->setQuackBehavior(new MuteQuack());
    d->performFly();
    d->performQuack();

    return 0;
}