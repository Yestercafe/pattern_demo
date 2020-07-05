#include "Context.hpp"
#include "State.hpp"
#include <iostream>

int main()
{
    State* st = new ConcreteStateA();
    Context* con = new Context(st);
    con->OperationChangeState();
    con->OperationChangeState();
    con->OperationChangeState();
    if(con != nullptr)
        delete con;
    if(st != nullptr)
        st = nullptr;
    
    return 0;
}
