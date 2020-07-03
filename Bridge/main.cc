#include "Abstraction.hpp"
#include "AbstractionImp.hpp"
#include <iostream>

int main()
{
    AbstractionImp* imp = new ConcreteAbstractionImpA();
    Abstraction* abs = new RefinedAbstraction(imp);
    abs->Operation();
    return 0;
}