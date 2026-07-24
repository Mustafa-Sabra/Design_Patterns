#ifndef FACTORY_HPP_
#define FACTORY_HPP_

#include "../Product/product.hpp"

class Factory
{
public:
    virtual Product *createProduct(void) = 0;
};

#endif