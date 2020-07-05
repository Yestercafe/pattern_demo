#include "Context.hpp"
#include "State.hpp"

Context::Context()
{ }

Context::Context(State* state)
{
    this->state = state;
}

Context::~Context()
{
    delete state;
}

void Context::OperationInterface()
{
    state->OperationInterface(this);
}

bool Context::ChangeState(State* state)
{
    this->state = state;
    return true;
}

void Context::OperationChangeState()
{
    state->OperationChangeState(this);
}
