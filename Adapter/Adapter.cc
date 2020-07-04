#include "Adapter.hpp"
#include <iostream>

Target::Target()
{ }

Target::~Target()
{ }

void Target::Request()
{
    std::cout << "Target::Request..." << std::endl;
}

Adaptee::Adaptee()
{ }

Adaptee::~Adaptee()
{ }

void Adaptee::SpecificRequest()
{
    std::cout << "Adaptee::SpecificRequest..." << std::endl;
}

Adapter::Adapter(Adaptee* ade)
{
    this->ade = ade;
}

Adapter::~Adapter()
{ }

void Adapter::Request()
{
    ade->SpecificRequest();
}
