#include "Context.hpp"
#include "Interpret.hpp"
#include <iostream>

int main()
{
    Context* c = new Context();
    AbstractExpression* te = new TerminalExpression("hello");
    AbstractExpression* nte = new NonterminalExpression(te, 2);
    nte->Interpret(*c);

    return 0;
}
