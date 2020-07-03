#include "Builder.hpp"
#include "Product.hpp"
#include <iostream>
#include <string>

Builder::Builder()
{ }

Builder::~Builder()
{ }

ConcreteBuilder::ConcreteBuilder()
{ }

ConcreteBuilder::~ConcreteBuilder()
{ }

void ConcreteBuilder::BuildPartA(const std::string& buildPara)
{
    std::cout << "Step1: build partA..." << std::endl;
}

void ConcreteBuilder::BuildPartB(const std::string& buildPara)
{
    std::cout << "Step1: build partB..." << std::endl;
}

void ConcreteBuilder::BuildPartC(const std::string& buildPara)
{
    std::cout << "Step1: build partC..." << std::endl;
}

Product* ConcreteBuilder::GetProduct()
{
    BuildPartA("pre-defined");
    BuildPartB("pre-defined");
    BuildPartC("pre-defined");
    return new Product();
}
