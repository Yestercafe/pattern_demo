#include "Context.hpp"
#include "Strategy.hpp"
#include <iostream>

int main()
{
    Strategy* ps = new ConcreteStrategyA();
    Context* pc = new Context(ps);
    pc->DoAction();
    if (pc != nullptr)
        delete pc;
    
    return 0;
}
