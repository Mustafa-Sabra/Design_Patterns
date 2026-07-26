#include "singleton.hpp"

Singleton *Singleton::instance = nullptr;

Singleton::Singleton(void) {};

Singleton *Singleton::getInstance(void)
{
    if (instance == nullptr)
    {
        instance = new Singleton();
    }
    else
    {
    }
    return instance;
}

void Singleton::print(void)
{
    std::cout << "Singleton instance address: " << this << std::endl;
}