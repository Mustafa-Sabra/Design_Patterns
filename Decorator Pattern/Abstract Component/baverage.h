#ifndef BAVERAGE_H_
#define BAVERAGE_H_

#include <string>
using namespace std;

class Beverage
{
protected:
    // Description of the beverage
    string description = "unknown beverage";

public:
    virtual string getDescription() const;

    virtual int cost() const = 0;
};

#endif /* BAVERAGE_H_ */