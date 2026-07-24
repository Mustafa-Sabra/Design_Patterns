#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <string>

class Product
{
private:
    std::string color;

public:
    virtual std::string getColor(void) = 0;
};

#endif