#include "Command.hpp"
#include "Reciever.hpp"
#include <iostream>

Command::Command()
{ }

Command::~Command()
{ }

ConcreteCommand::ConcreteCommand(Reciever* rev)
{
    this->rev = rev;
}

ConcreteCommand::~ConcreteCommand()
{ }

void ConcreteCommand::Excute()
{
    std::cout << "ConcreteCommand::Excute..." << std::endl;
}
