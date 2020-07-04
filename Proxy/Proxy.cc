#include "Proxy.hpp"
#include <iostream>

Subject::Subject()
{ }

Subject::~Subject()
{ }

ConcreteSubject::ConcreteSubject()
{ }

ConcreteSubject::~ConcreteSubject()
{ }

void ConcreteSubject::Request()
{
    std::cout << "ConcreteSubject::Request..." << std::endl;
}

Proxy::Proxy()
{ }

Proxy::Proxy(Subject* sub)
{
    this->sub = sub;
}

Proxy::~Proxy()
{
    delete sub;
}

void Proxy::Request()
{
    std::cout << "Proxy::Request..." << std::endl;
    sub->Request();
}
