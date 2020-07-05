#include "Memento.hpp"
#include <iostream>

int main()
{
    Originator* o = new Originator();
    o->SetState("old");
    o->PrintState();
    Memento* m = o->CreateMemento();  // like a snapshot
    o->SetState("new");
    o->PrintState();
    o->RestoreToMemento(m);
    o->PrintState();

    return 0;
}
