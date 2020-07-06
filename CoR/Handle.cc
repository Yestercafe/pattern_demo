#include "Handle.hpp"
#include <iostream>

Handle::Handle()
{
    succ = nullptr;
}

Handle::~Handle()
{
    delete succ;
}

Handle::Handle(Handle* succ)
{
    this->succ = succ;
}

void Handle::SetSuccessor(Handle* succ)
{
    this->succ = succ;
}

Handle* Handle::GetSuccessor()
{
    return succ;
}

ConcreteHandleA::ConcreteHandleA()
{ }

ConcreteHandleA::ConcreteHandleA(Handle* succ)
 : Handle(succ) { }

ConcreteHandleA::~ConcreteHandleA()
{ }

void ConcreteHandleA::HandleRequest()
{
    if(this->GetSuccessor() != nullptr) {
        std::cout << "ConcreteHandleA request successor..." << std::endl;
        this->GetSuccessor()->HandleRequest();
    }
    else {
        std::cout << "ConcreteHandleA excute self..." << std::endl;
    }
}

ConcreteHandleB::ConcreteHandleB()
{ }

ConcreteHandleB::ConcreteHandleB(Handle* succ)
 : Handle(succ) { }

ConcreteHandleB::~ConcreteHandleB()
{ }

void ConcreteHandleB::HandleRequest()
{
    if(this->GetSuccessor() != nullptr) {
        std::cout << "ConcreteHandleB request successor..." << std::endl;
        this->GetSuccessor()->HandleRequest();
    }
    else {
        std::cout << "ConcreteHandleB excute self..." << std::endl;
    }
}
