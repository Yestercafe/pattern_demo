#include "Interpret.hpp"
#include <iostream>
#include <string>

AbstractExpression::AbstractExpression()
{ }

AbstractExpression::~AbstractExpression()
{ }

void AbstractExpression::Interpret(const Context& c)
{ }

TerminalExpression::TerminalExpression(const std::string& statement)
{
    this->statement = statement;
}

TerminalExpression::~TerminalExpression()
{ }

void TerminalExpression::Interpret(const Context& c)
{
    std::cout << this->statement << " TerminalExpression" << std::endl;
}

NonterminalExpression::NonterminalExpression(AbstractExpression* expression, int times)
{
    this->expression = expression;
    this->times = times;
}

NonterminalExpression::~NonterminalExpression()
{ }

void NonterminalExpression::Interpret(const Context& c)
{
    for(int i = 0; i < times; i++)
        this->expression->Interpret(c);
}
