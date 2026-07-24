#include "../Abstract Decorator/absDecorator.h"
#include <string>
using namespace std;

class Milk : public AbsDecorator
{
private:
    Beverage *beverage;

public:
    Milk(Beverage *bev) : beverage(bev) {}
    string getDescription() const override;
    int cost() const override;
};