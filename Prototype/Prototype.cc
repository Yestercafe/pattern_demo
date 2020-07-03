#include "Prototype.hpp"
#include <iostream>

Prototype::Prototype()
{ }

Prototype::~Prototype()
{ }

Prototype* Prototype::Clone() const
{
    return nullptr;
}

ConcretePrototype::ConcretePrototype()
{ }

ConcretePrototype::~ConcretePrototype()
{ }

ConcretePrototype::ConcretePrototype(const ConcretePrototype& cp)
{
    std::cout << "Concreteprototype copy..." << std::endl;
}

Prototype* ConcretePrototype::Clone() const
{
    return new ConcretePrototype(*this);
}