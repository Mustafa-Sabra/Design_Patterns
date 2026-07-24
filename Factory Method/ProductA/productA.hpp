#ifndef PRODUCTA_HPP_
#define PRODUCTA_HPP_

#include <string>
#include "../Product/product.hpp"

class ProductA : public Product
{

    virtual std::string getColor(void);
};

#endif