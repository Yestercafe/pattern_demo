#include "Handle.hpp"
#include <iostream>

int main()
{
    Handle* h1 = new ConcreteHandleA();
    Handle* h2 = new ConcreteHandleB();

    h1->SetSuccessor(h2);
    h1->HandleRequest();

    return 0;
}