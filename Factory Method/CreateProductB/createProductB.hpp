#ifndef CREATE_PRODUCT_B_HPP
#define CREATE_PRODUCT_B_HPP

#include "../Factory/factory.hpp"
#include "../Product/product.hpp"
#include "../ProductB/productB.hpp"

class CreateProductB : public Factory
{

public:
    virtual Product *createProduct() override;
};

#endif
