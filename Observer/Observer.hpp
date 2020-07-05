#ifndef _OBSERVER_HPP_
#define _OBSERVER_HPP_
#include "Subject.hpp"
#include <string>

using State = std::string;

class Observer {
public:
    virtual ~Observer();
    virtual void Update(Subject* sub) = 0;
    virtual void PrintInfo() = 0;
protected:
    Observer();
    State st;
};

class ConcreteObserverA : public Observer {
public:
    virtual Subject* GetSubject();
    ConcreteObserverA(Subject* sub);
    virtual ~ConcreteObserverA();
    void Update(Subject* sub);
    void PrintInfo();
private:
    Subject* sub;
};

class ConcreteObserverB : public Observer {
public:
    virtual Subject* GetSubject();
    ConcreteObserverB(Subject* sub);
    virtual ~ConcreteObserverB();
    void Update(Subject* sub);
    void PrintInfo();
private:
    Subject* sub;
};

#endif  /* _OBSERVER_HPP_ */
