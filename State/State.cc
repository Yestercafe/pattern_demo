#include "State.hpp"
#include "Context.hpp"
#include <iostream>

State::State()
{ }

State::~State()
{ }

bool State::ChangeState(Context* con, State* st)
{
    con->ChangeState(st);
    return true;
}

void State::OperationChangeState(Context* con)
{ }

ConcreteStateA::ConcreteStateA()
{ }

ConcreteStateA::~ConcreteStateA()
{ }

void ConcreteStateA::OperationInterface(Context* con)
{
    std::cout << "ConcreteStateA::OperationInterface..." << std::endl;
}

void ConcreteStateA::OperationChangeState(Context* con)
{
    OperationInterface(con);
    this->ChangeState(con, new ConcreteStateB());
}

ConcreteStateB::ConcreteStateB()
{ }

ConcreteStateB::~ConcreteStateB()
{ }

void ConcreteStateB::OperationInterface(Context* con)
{
    std::cout << "ConcreteStateB::OperationInterface..." << std::endl;
}

void ConcreteStateB::OperationChangeState(Context* con)
{
    OperationInterface(con);
    this->ChangeState(con, new ConcreteStateA());
}
