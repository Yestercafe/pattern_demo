#ifndef _COLLEAGUE_HPP_
#define _COLLEAGUE_HPP_
#include <string>

class Mediator;

class Colleague {
public:
    using State = std::string;
    virtual ~Colleague();
    virtual void Action() = 0;
    virtual void SetState(const State& st) = 0;
    virtual State GetState() = 0;
protected:
    Colleague();
    Colleague(Mediator* mdt);
    Mediator* mdt;
};

class ConcreteColleagueA : public Colleague {
public:
    ConcreteColleagueA();
    ConcreteColleagueA(Mediator* mdt);
    ~ConcreteColleagueA();
    void Action();
    void SetState(const State& st);
    State GetState();
private:
    State st;
};

class ConcreteColleagueB : public Colleague {
public:
    ConcreteColleagueB();
    ConcreteColleagueB(Mediator* mdt);
    ~ConcreteColleagueB();
    void Action();
    void SetState(const State& st);
    State GetState();
private:
    State st;
};

#endif  /* _COLLEAGUE_HPP_ */
