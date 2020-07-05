#include "Template.hpp"
#include <iostream>

AbstractClass::AbstractClass()
{ }

AbstractClass::~AbstractClass()
{ }

void AbstractClass::TemplateMethod()
{
    this->PrimitiveOperation1();
    this->PrimitiveOperation2();
}

ConcreteClass1::ConcreteClass1()
{ }

ConcreteClass1::~ConcreteClass1()
{ }

void ConcreteClass1::PrimitiveOperation1()
{
    std::cout << "ConcreteClass1::PrimitiveOperation1..." << std::endl;
}

void ConcreteClass1::PrimitiveOperation2()
{
    std::cout << "ConcreteClass1::PrimitiveOperation2..." << std::endl;
}

ConcreteClass2::ConcreteClass2()
{ }

ConcreteClass2::~ConcreteClass2()
{ }

void ConcreteClass2::PrimitiveOperation1()
{
    std::cout << "ConcreteClass2::PrimitiveOperation1..." << std::endl;
}

void ConcreteClass2::PrimitiveOperation2()
{
    std::cout << "ConcreteClass2::PrimitiveOperation2..." << std::endl;
}
