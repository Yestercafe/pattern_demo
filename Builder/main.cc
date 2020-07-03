#include "Builder.hpp"
#include "Product.hpp"
#include "Director.hpp"
#include <iostream>

int main()
{
    Director* d = new Director(new ConcreteBuilder());
    d->Construct();

    return 0;
}
