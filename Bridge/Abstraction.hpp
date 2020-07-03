#ifndef _ABSTRACTION_HPP_
#define _ABSTRACTION_HPP_

class AbstractionImp;

class Abstraction {
public:
    virtual ~Abstraction();
    virtual void Operation() = 0;
protected:
    Abstraction();
};

class RefinedAbstraction : public Abstraction {
public:
    RefinedAbstraction(AbstractionImp* imp);
    ~RefinedAbstraction();
    void Operation();
private:
    AbstractionImp* imp;
};

#endif  /* _ABSTRACTION_HPP_ */
