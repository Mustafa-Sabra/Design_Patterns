#include "main.hpp"

int main(void)
{
    Factory *factory = new ClassicFactory();
    Chair *chair = factory->createChair();
    Sofa *sofa = factory->createSofa();

    chair->chairType();
    sofa->sofaType();

    delete sofa;
    delete chair;
    delete factory;
    return 0;
}