#include "Colleague.hpp"
#include "Mediator.hpp"
#include <iostream>

Colleague::Colleague()
{ }

Colleague::Colleague(Mediator* mdt)
{
    this->mdt = mdt;
}

Colleague::~Colleague()
{ }

ConcreteColleagueA::ConcreteColleagueA()
{ }

ConcreteColleagueA::~ConcreteColleagueA()
{ }

ConcreteColleagueA::ConcreteColleagueA(Mediator* mdt)
 : Colleague(mdt) { }

Colleague::State ConcreteColleagueA::GetState()
{
    return st;
}

void ConcreteColleagueA::SetState(const State& st)
{
    this->st = st;
}

void ConcreteColleagueA::Action()
{
    mdt->DoActionFromAtoB();
    std::cout << "State of ConcreteColleagueB: " << this->GetState()
              << std::endl;
}

ConcreteColleagueB::ConcreteColleagueB()
{ }

ConcreteColleagueB::~ConcreteColleagueB()
{ }

ConcreteColleagueB::ConcreteColleagueB(Mediator* mdt)
 : Colleague(mdt) { }

Colleague::State ConcreteColleagueB::GetState()
{
    return st;
}

void ConcreteColleagueB::SetState(const State& st)
{
    this->st = st;
}

void ConcreteColleagueB::Action()
{
    mdt->DoActionFromBtoA();
    std::cout << "State of ConcreteColleagueA: " << this->GetState()
              << std::endl;
}
