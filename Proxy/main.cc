#include "Proxy.hpp"
#include <iostream>

int main()
{
    Subject* sub = new ConcreteSubject();
    Proxy* p = new Proxy(sub);
    p->Request();

    return 0;
}
