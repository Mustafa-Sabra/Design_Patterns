#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <iostream>

class Singleton
{

private:
    static Singleton *instance;
    Singleton();

public:
    static Singleton *getInstance();
    void print(void);
};

#endif // SINGLETON_HPP