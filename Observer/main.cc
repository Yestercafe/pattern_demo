#include "Subject.hpp"
#include "Observer.hpp"
#include <iostream>

int main()
{
    auto sub = new ConcreteSubject();
    Observer* o1 = new ConcreteObserverA(sub);
    Observer* o2 = new ConcreteObserverB(sub);
    sub->SetState("old");
    sub->Notify();
    sub->SetState("new");
    sub->Notify();

    return 0;
}
