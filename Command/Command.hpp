#ifndef _COMMAND_HPP_
#define _COMMAND_HPP_

class Reciever;

class Command {
public:
    virtual ~Command();
    virtual void Excute() = 0;
protected:
    Command();
};

class ConcreteCommand : public Command {
public:
    ConcreteCommand(Reciever* rev);
    ~ConcreteCommand();
    void Excute();
private:
    Reciever* rev;
};

#endif  /* _COMMAND_HPP_ */
