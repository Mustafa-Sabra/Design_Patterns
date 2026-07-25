#include "chair.hpp"

void ArtChair::chairType()
{
    std::cout << "This is an Art Chair." << std::endl;
}

ArtChair::~ArtChair()
{
    std::cout << "Art Chair destroyed." << std::endl;
}
/*********************************************************************************** */
void ClassicChair::chairType()
{
    std::cout << "This is a Classic Chair." << std::endl;
}

ClassicChair::~ClassicChair()
{
    std::cout << "Classic Chair destroyed." << std::endl;
}
