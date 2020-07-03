#include "Product.hpp"
#include <iostream>

Product::Product()
{ }

Product::~Product()
{ }

void Product::ProducePart()
{
    std::cout << "ProducePart..." << std::endl;
}

ProductPart::ProductPart()
{ }

ProductPart::~ProductPart()
{ }

ProductPart* ProductPart::BuildPart()
{
    return new ProductPart();
}
