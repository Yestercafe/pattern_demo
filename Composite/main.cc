#include "Component.hpp"
#include "Composite.hpp"
#include "Leaf.hpp"
#include <iostream>

int main()
{
    Leaf* l = new Leaf();
    l->Operation();
    Composite* com = new Composite();
    com->Add(l);
    com->Operation();
    Component* ll = com->GetChild(0);
    ll->Operation();

    return 0;
}
