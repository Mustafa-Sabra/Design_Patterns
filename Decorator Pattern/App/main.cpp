#include "main.h"

using namespace std;

int main()
{
    Beverage *beverage = new HouseBlend();
    Beverage *milk = new Milk(beverage);

    cout << milk->getDescription() << endl;
    cout << milk->cost();
}