#ifndef _ELEMENT_HPP_
#define _ELEMENT_HPP_

class Visitor;

class Element {
public:
    virtual ~Element();
    virtual void Accept(Visitor* vis) = 0;
protected:
    Element();
};

class ConcreteElementA : public Element {
public:
    ConcreteElementA();
    ~ConcreteElementA();
    void Accept(Visitor* vis);
};

class ConcreteElementB : public Element {
public:
    ConcreteElementB();
    ~ConcreteElementB();
    void Accept(Visitor* vis);
};

#endif  /* _ELEMENT_HPP_ */
