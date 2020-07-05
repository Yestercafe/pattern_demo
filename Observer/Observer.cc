#include "Observer.hpp"
#include "Subject.hpp"
#include <iostream>
#include <string>

Observer::Observer()
{
    st = '\0';
}

Observer::~Observer()
{ }

ConcreteObserverA::ConcreteObserverA(Subject* sub)
{
    this->sub = sub;
    this->sub->Attach(this);
}

ConcreteObserverA::~ConcreteObserverA()
{
    sub->Detach(this);
    if (sub != nullptr)
        delete sub;
}

Subject* ConcreteObserverA::GetSubject()
{
    return sub;
}

void ConcreteObserverA::PrintInfo()
{
    std::cout << "ConcreteObserverA observer " << sub->GetState() << std::endl;
}

void ConcreteObserverA::Update(Subject* sub)
{
    st = sub->GetState();
    PrintInfo();
}

ConcreteObserverB::ConcreteObserverB(Subject* sub)
{
    this->sub = sub;
    this->sub->Attach(this);
}

ConcreteObserverB::~ConcreteObserverB()
{
    sub->Detach(this);
    if (sub != nullptr)
        delete sub;
}

Subject* ConcreteObserverB::GetSubject()
{
    return sub;
}

void ConcreteObserverB::PrintInfo()
{
    std::cout << "ConcreteObserverB observer " << sub->GetState() << std::endl;
}

void ConcreteObserverB::Update(Subject* sub)
{
    st = sub->GetState();
    PrintInfo();
}
