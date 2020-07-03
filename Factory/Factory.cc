#include "Factory.hpp"
#include "Product.hpp"
#include <iostream>
using namespace std;

Factory::Factory()
{ }

Factory::~Factory()
{ }

ConcreteFactory::ConcreteFactory()
{
    std::cout << "ConcreteFactory..." << std::endl;
}

ConcreteFactory::~ConcreteFactory()
{ }

Product* ConcreteFactory::CreateProduct()
{
    return new ConcreteProduct();
}
