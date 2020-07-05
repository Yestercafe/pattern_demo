#ifndef _CONTEXT_HPP_
#define _CONTEXT_HPP_

class Strategy;

class Context {
public:
    Context(Strategy* stg);
    ~Context();
    void DoAction();
private:
    Strategy* stg;
};

#endif  /* _CONTEXT_HPP_ */
