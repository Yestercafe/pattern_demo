#include "Visitor.hpp"
#include "Element.hpp"
#include <iostream>

Visitor::Visitor()
{ }

Visitor::~Visitor()
{ }

ConcreteVisitorA::ConcreteVisitorA()
{ }

ConcreteVisitorA::~ConcreteVisitorA()
{ }

void ConcreteVisitorA::VisitConcreteElementA(Element* elm)
{
    std::cout << "ConcreteVisitorA::VisitConcreteElementA..." << std::endl;
}

void ConcreteVisitorA::VisitConcreteElementB(Element* elm)
{
    std::cout << "ConcreteVisitorA::VisitConcreteElementB..." << std::endl;
}

ConcreteVisitorB::ConcreteVisitorB()
{ }

ConcreteVisitorB::~ConcreteVisitorB()
{ }

void ConcreteVisitorB::VisitConcreteElementA(Element* elm)
{
    std::cout << "ConcreteVisitorB::VisitConcreteElementA..." << std::endl;
}

void ConcreteVisitorB::VisitConcreteElementB(Element* elm)
{
    std::cout << "ConcreteVisitorB::VisitConcreteElementB..." << std::endl;
}
