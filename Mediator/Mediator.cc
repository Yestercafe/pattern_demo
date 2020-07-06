#include "Mediator.hpp"
#include "Colleague.hpp"

Mediator::Mediator()
{ }

Mediator::~Mediator()
{ }

ConcreteMediator::ConcreteMediator()
{ }

ConcreteMediator::~ConcreteMediator()
{ }

ConcreteMediator::ConcreteMediator(Colleague* clgA, Colleague* clgB)
{
    this->clgA = clgA;
    this->clgB = clgB;
}

void ConcreteMediator::DoActionFromAtoB()
{
    clgB->SetState(clgA->GetState());
}

void ConcreteMediator::DoActionFromBtoA()
{
    clgA->SetState(clgB->GetState());
}

void ConcreteMediator::SetConcreteColleagueA(Colleague* clgA)
{
    this->clgA = clgA;
}

void ConcreteMediator::SetConcreteColleagueB(Colleague* clgB)
{
    this->clgB = clgB;
}

Colleague* ConcreteMediator::GetConcreteColleagueA()
{
    return clgA;
}

Colleague* ConcreteMediator::GetConcreteColleagueB()
{
    return clgB;
}

void ConcreteMediator::IntroColleague(Colleague* clgA, Colleague* clgB)
{
    this->clgA = clgA;
    this->clgB = clgB;
}
