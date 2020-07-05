#include "Memento.hpp"
#include <iostream>

using State = std::string;

Originator::Originator()
{
    this->st = "";
    this->mem = nullptr;
}

Originator::Originator(const State& st)
{
    this->st = st;
    this->mem = nullptr;
}

Originator::~Originator()
{ }

Memento* Originator::CreateMemento()
{
    return new Memento(st);
}

State Originator::GetState()
{
    return st;
}

void Originator::SetState(const State& st)
{
    this->st = st;
}

void Originator::PrintState()
{
    std::cout << this->st << "..." << std::endl;
}

void Originator::SetMemento(Memento* mem)
{
    this->mem = mem;
}

void Originator::RestoreToMemento(Memento* mem)
{
    this->st = mem->GetState();
}

Memento::Memento(const State& st)
{
    this->st = st;
}

State Memento::GetState()
{
    return st;
}

void Memento::SetState(const State& st)
{
    this->st = st;
}
