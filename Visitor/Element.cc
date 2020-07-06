#include "Element.hpp"
#include "Visitor.hpp"
#include <iostream>

Element::Element()
{ }

Element::~Element()
{ }

void Element::Accept(Visitor* vis)
{ }

ConcreteElementA::ConcreteElementA()
{ }

ConcreteElementA::~ConcreteElementA()
{ }

void ConcreteElementA::Accept(Visitor* vis)
{
    vis->VisitConcreteElementA(this);
    std::cout << "Visiting ConcreteElementA..." << std::endl;
}

ConcreteElementB::ConcreteElementB()
{ }

ConcreteElementB::~ConcreteElementB()
{ }

void ConcreteElementB::Accept(Visitor* vis)
{
    vis->VisitConcreteElementB(this);
    std::cout << "Visiting ConcreteElementB..." << std::endl;
}
