#include "Iterator.hpp"
#include "Aggregate.hpp"
#include <iostream>

int main()
{
    Aggregate* ag = new ConcreteAggregate();
    for(auto iter = new ConcreteIterator(ag); !(iter->IsDone()); iter->Next()) {
        std::cout << iter->CurrentItem() << std::endl;
    }
    return 0;
}
