#ifndef PRODUCTB_HPP_
#define PRODUCTB_HPP_

#include <string>
#include "../Product/product.hpp"

class ProductB : public Product
{

    virtual std::string getColor(void);
};

#endif