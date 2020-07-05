#include "Context.hpp"
#include "Strategy.hpp"
#include <iostream>

Context::Context(Strategy* stg)
{
    this->stg = stg;
}

Context::~Context()
{
    if(stg != nullptr)
        delete stg;
}

void Context::DoAction()
{
    stg->AlgorithmInterface();
}
