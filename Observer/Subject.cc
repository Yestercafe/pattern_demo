#include "Subject.hpp"
#include "Observer.hpp"
#include <iostream>
#include <list>
#include <string>
using State = std::string;

Subject::Subject()
{
    obvs = new std::list<Observer*>;
}

Subject::~Subject()
{ }

void Subject::Attach(Observer* obv)
{
    obvs->push_front(obv);
}

void Subject::Detach(Observer* obv)
{
    if(obv != nullptr)
        obvs->remove(obv);
}

void Subject::Notify()
{
    for(auto iter = obvs->begin(); iter != obvs->end(); iter++) {
        (*iter)->Update(this);
    }
}

ConcreteSubject::ConcreteSubject()
{
    this->st = '\0';
}

ConcreteSubject::~ConcreteSubject()
{ }

State ConcreteSubject::GetState()
{
    return st;
}

void ConcreteSubject::SetState(const State& st)
{
    this->st = st;
}
