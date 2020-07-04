#include "Decorator.hpp"
#include <iostream>

int main()
{
    Component* com = new ConcreteComponent();
    Decorator* dec = new ConcreteDecorator(com);
    dec->Operation();
    delete dec;
    
    return 0;
}
