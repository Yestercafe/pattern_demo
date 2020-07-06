#include "Element.hpp"
#include "Visitor.hpp"
#include <iostream>

int main()
{
    Visitor* vis = new ConcreteVisitorA();
    Element* elm = new ConcreteElementA();
    elm->Accept(vis);

    return 0;
}