#ifndef CREATE_PRODUCT_A_HPP
#define CREATE_PRODUCT_A_HPP

#include "../Factory/factory.hpp"
#include "../ProductA/productA.hpp"

class CreateProductA : public Factory
{

public:
    virtual Product *createProduct() override;
};

#endif
