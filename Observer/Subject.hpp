#ifndef _SUBJECT_HPP_
#define _SUBJECT_HPP_

#include <list>
#include <iostream>

using State = std::string;

class Observer;

class Subject {
public:
    virtual ~Subject();
    virtual void Attach(Observer* obv);
    virtual void Detach(Observer* obv);
    virtual void Notify();
    virtual void SetState(const State& st) = 0;
    virtual State GetState() = 0;
protected:
    Subject();
private:
    std::list<Observer*>* obvs;
};

class ConcreteSubject : public Subject {
public:
    ConcreteSubject();
    ~ConcreteSubject();
    State GetState();
    void SetState(const State& st);
private:
    State st;
};

#endif  /* _SUBJECT_HPP_ */

