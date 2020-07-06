#include "Invoker.hpp"
#include "Command.hpp"
#include <iostream>

Invoker::Invoker(Command* cmd)
{
    this->cmd = cmd;
}

Invoker::~Invoker()
{ }

void Invoker::Invoke()
{
    std::cout << "Invoker::Invoke..." << std::endl;
    cmd->Excute();
}
