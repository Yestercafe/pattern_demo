#include "Iterator.hpp"
#include "Aggregate.hpp"
#include <iostream>

Iterator::Iterator()
{ }

Iterator::~Iterator()
{ }

ConcreteIterator::ConcreteIterator(Aggregate* ag, int idx)
{
    this->ag = ag;
    this->idx = idx;
}

ConcreteIterator::~ConcreteIterator()
{ }

Object ConcreteIterator::CurrentItem()
{
    return ag->GetItem(idx);
}

void ConcreteIterator::First()
{
    idx = 0;
}

void ConcreteIterator::Next()
{
    if(idx < ag->GetSize())
        idx++;
}

bool ConcreteIterator::IsDone()
{
    return idx == ag->GetSize();
}
