#include "Flyweight.hpp"
#include <iostream>
#include <string>

Flyweight::Flyweight(const std::string& intrinsicState)
{
    this->intrinsicState = intrinsicState;
}

Flyweight::~Flyweight()
{ }

void Flyweight::Operation(const std::string& extrinsicState)
{ }

std::string Flyweight::GetIntrinsicState()
{
    return this->intrinsicState;
}

ConcreteFlyweight::ConcreteFlyweight(const std::string& intrinsicState)
 : Flyweight(intrinsicState)
{
    std::cout << "ConcreteFlyweight construct... "
              << intrinsicState << std::endl;
}

ConcreteFlyweight::~ConcreteFlyweight()
{ }

void ConcreteFlyweight::Operation(const std::string& extrinsicState)
{
    std::cout << "ConcreteFlyweight: intrinsic [" << GetIntrinsicState()
              << "], extrinsic [" << extrinsicState << std::endl;
}

