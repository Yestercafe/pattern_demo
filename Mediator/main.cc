#include "Mediator.hpp"
#include "Colleague.hpp"
#include <iostream>

int main()
{
    auto m = new ConcreteMediator();
    auto c1 = new ConcreteColleagueA(m);
    auto c2 = new ConcreteColleagueB(m);
    m->IntroColleague(c1, c2);

    c1->SetState("old");
    c2->SetState("old");
    c1->Action();
    c2->Action();
    std::endl(std::cout);

    c1->SetState("new");
    c1->Action();
    c2->Action();
    std::endl(std::cout);

    c2->SetState("new");
    c2->Action();
    c1->Action();

    return 0;
}
