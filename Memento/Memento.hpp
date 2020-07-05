#ifndef _MEMENTO_HPP_
#define _MEMENTO_HPP_
#include <string>

class Memento;

class Originator {
public:
    using State = std::string;
    Originator();
    Originator(const State& st);
    ~Originator();
    Memento* CreateMemento();
    void SetMemento(Memento* mem);
    void RestoreToMemento(Memento* mem);
    State GetState();
    void SetState(const State& st);
    void PrintState();
private:
    State st;
    Memento* mem;
};

class Memento {
private:
    friend class Originator;
    using State = std::string;
    Memento();
    Memento(const State& st);
    ~Memento();
    void SetState(const State& st);
    State GetState();
private:
    State st;
};

#endif  /* _MEMENTO_HPP_ */
