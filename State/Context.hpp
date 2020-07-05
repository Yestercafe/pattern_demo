#ifndef _CONTEXT_HPP_
#define _CONTEXT_HPP_

class State;

class Context {
public:
    Context();
    Context(State* state);
    ~Context();
    void OperationInterface();
    void OperationChangeState();
private:
    friend class State;
    bool ChangeState(State* state);
private:
    State* state;
};

#endif  /* _CONTEXT_HPP_ */
