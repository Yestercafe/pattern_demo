#include "Abstraction.hpp"
#include "AbstractionImp.hpp"
#include <iostream>

Abstraction::Abstraction()
{ }

Abstraction::~Abstraction()
{ }

RefinedAbstraction::RefinedAbstraction(AbstractionImp* imp)
{
    this->imp = imp;
}

RefinedAbstraction::~RefinedAbstraction()
{ }

void RefinedAbstraction::Operation()
{
    imp->Operation();
}
