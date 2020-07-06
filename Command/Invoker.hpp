#ifndef _INVOKER_HPP_
#define _INVOKER_HPP_

class Command;

class Invoker {
public:
    Invoker(Command* cmd);
    ~Invoker();
    void Invoke();
private:
    Command* cmd;
};

#endif  /* _INVOKER_HPP_ */
