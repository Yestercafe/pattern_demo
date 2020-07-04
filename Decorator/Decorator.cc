#include "Decorator.hpp"
#include <iostream>

Component::Component()
{ }

Component::~Component()
{ }

void Component::Operation()
{ }

ConcreteComponent::ConcreteComponent()
{ }

ConcreteComponent::~ConcreteComponent()
{ }

void ConcreteComponent::Operation()
{
    std::cout << "ConcreteComponent::Operation..." << std::endl;
}

Decorator::Decorator(Component* com)
{
    this->com = com;
}

Decorator::~Decorator()
{
    delete com;
}

void Decorator::Operation()
{ }

ConcreteDecorator::ConcreteDecorator(Component* com) : Decorator(com)
{ }

ConcreteDecorator::~ConcreteDecorator()
{ }

void ConcreteDecorator::Operation()
{
    com->Operation();
    this->AddedBehavior();
}

void ConcreteDecorator::AddedBehavior()
{
    std::cout << "ConcreteDecorator::AddedBehavior..." << std::endl;
}
