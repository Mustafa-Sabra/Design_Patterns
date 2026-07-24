#include "../Abstract Component/baverage.h"

class HouseBlend : public Beverage
{
public:
    HouseBlend();
    int cost() const override;
};