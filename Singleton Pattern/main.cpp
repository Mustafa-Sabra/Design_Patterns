#include "main.hpp"

int main(void)
{
    Singleton *singleton1 = Singleton::getInstance();
    Singleton *singleton2 = Singleton::getInstance();

    singleton1->print();
    singleton2->print();

    return 0;
}