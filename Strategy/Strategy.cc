#include "Strategy.hpp"
#include <iostream>

Strategy::Strategy()
{ }

Strategy::~Strategy()
{
    std::cout << "~Strategy..." << std::endl;
}

void Strategy::AlgorithmInterface()
{ }

ConcreteStrategyA::ConcreteStrategyA()
{ }

ConcreteStrategyA::~ConcreteStrategyA()
{
    std::cout << "~ConcreteStrategyA..." << std::endl;
}

void ConcreteStrategyA::AlgorithmInterface()
{
    std::cout << "ConcreteStrategyA::AlgorithmInterface..." << std::endl;
}

ConcreteStrategyB::ConcreteStrategyB()
{ }

ConcreteStrategyB::~ConcreteStrategyB()
{
    std::cout << "~ConcreteStrategyB..." << std::endl;
}

void ConcreteStrategyB::AlgorithmInterface()
{
    std::cout << "ConcreteStrategyB::AlgorithmInterface..." << std::endl;
}
