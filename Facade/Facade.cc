#include "Facade.hpp"
#include <iostream>

Subsystem1::Subsystem1()
{ }

Subsystem1::~Subsystem1()
{ }

void Subsystem1::Operation()
{
    std::cout << "Subsystem1::Operation..." << std::endl;
}

Subsystem2::Subsystem2()
{ }

Subsystem2::~Subsystem2()
{ }

void Subsystem2::Operation()
{
    std::cout << "Subsystem2::Operation..." << std::endl;
}

Facade::Facade()
{
    this->ss1 = new Subsystem1();
    this->ss2 = new Subsystem2();
}

Facade::~Facade()
{
    delete ss1;
    delete ss2;
}

void Facade::OperationWrapper()
{
    this->ss1->Operation();
    this->ss2->Operation();
}
