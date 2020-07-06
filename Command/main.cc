#include "Command.hpp"
#include "Reciever.hpp"
#include "Invoker.hpp"
#include <iostream>

int main()
{
    Reciever* rev = new Reciever();
    Command* cmd = new ConcreteCommand(rev);
    Invoker* inv = new Invoker(cmd);
    inv->Invoke();
    
    return 0;
}
