#include "AbstractFactory.hpp"
#include "Product.hpp"
#include <iostream>

int main()
{
    AbstractFactory* cf1 = new ConcreteFactory1();
    cf1->CreateProductA();
    cf1->CreateProductB();

    AbstractFactory* cf2 = new ConcreteFactory2();
    cf2->CreateProductA();
    cf2->CreateProductB();

    return 0;
}