#include "main.hpp"
using namespace std;
int main(void)
{

    Factory *factory = new CreateProductA();

    Product *product = factory->createProduct();

    std::string color = product->getColor();
    std::cout << "Color: " << color << std::endl;

    return 0;
}