#include "Facade.hpp"
#include <iostream>

int main()
{
    Facade* f = new Facade();
    f->OperationWrapper();
    return 0;
}
