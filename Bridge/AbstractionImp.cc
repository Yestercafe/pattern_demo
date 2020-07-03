#include "AbstractionImp.hpp"
#include <iostream>

AbstractionImp::AbstractionImp()
{ }

AbstractionImp::~AbstractionImp()
{ }

void AbstractionImp::Operation()
{
    std::cout << "AbstractionImp...imp..." << std::endl;
}

ConcreteAbstractionImpA::ConcreteAbstractionImpA()
{ }

ConcreteAbstractionImpA::~ConcreteAbstractionImpA()
{ }

void ConcreteAbstractionImpA::Operation()
{
    std::cout << "ConcreteAbstractionimpA..." << std::endl;
}

ConcreteAbstractionImpB::ConcreteAbstractionImpB()
{ }

ConcreteAbstractionImpB::~ConcreteAbstractionImpB()
{ }

void ConcreteAbstractionImpB::Operation()
{
    std::cout << "ConcreteAbstractionimpB..." << std::endl;
}
