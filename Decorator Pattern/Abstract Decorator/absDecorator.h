#include "../Abstract Component/baverage.h"
#include <string>
using namespace std;

class AbsDecorator : public Beverage
{
public:
    virtual string getDescription() const = 0;
};