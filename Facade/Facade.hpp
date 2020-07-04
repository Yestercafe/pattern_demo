#ifndef _FACADE_HPP_
#define _FACADE_HPP_

class Subsystem1 {
public:
    Subsystem1();
    ~Subsystem1();
    void Operation();
};

class Subsystem2 {
public:
    Subsystem2();
    ~Subsystem2();
    void Operation();
};

class Facade {
public:
    Facade();
    ~Facade();
    void OperationWrapper();
private:
    Subsystem1* ss1;
    Subsystem2* ss2;
};

#endif  /* _FACADE_HPP_ */
