#ifndef _INTERPRET_HPP_
#define _INTERPRET_HPP_
#include "Context.hpp"
#include <string>

class AbstractExpression {
public:
    virtual ~AbstractExpression();
    virtual void Interpret(const Context& c);
protected:
    AbstractExpression();
};

class TerminalExpression : public AbstractExpression {
public:
    TerminalExpression(const std::string& statement);
    ~TerminalExpression();
    void Interpret(const Context& c);
private:
    std::string statement;
};

class NonterminalExpression : public AbstractExpression {
public:
    NonterminalExpression(AbstractExpression* statement, int times);
    ~NonterminalExpression();
    void Interpret(const Context& c);
private:
    AbstractExpression* expression;
    int times;
};

#endif  /* _INTERPRET_HPP_ */
