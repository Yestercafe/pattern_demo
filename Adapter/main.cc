#include "Adapter.hpp"
#include <iostream>

int main()
{
    Adaptee* ade = new Adaptee();
    Target* adt = new Adapter(ade);
    adt->Request();

    return 0;
}
