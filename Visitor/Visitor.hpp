#ifndef _VISITOR_HPP_
#define _VISITOR_HPP_

class ConcreteElementA;
class ConcreteElementB;
class Element;

class Visitor {
public:
    virtual ~Visitor();
    virtual void VisitConcreteElementA(Element* elm) = 0;
    virtual void VisitConcreteElementB(Element* elm) = 0;
protected:
    Visitor();
};

class ConcreteVisitorA : public Visitor {
public:
    ConcreteVisitorA();
    ~ConcreteVisitorA();
    void VisitConcreteElementA(Element* elm);
    void VisitConcreteElementB(Element* elm);
};

class ConcreteVisitorB : public Visitor {
public:
    ConcreteVisitorB();
    ~ConcreteVisitorB();
    void VisitConcreteElementA(Element* elm);
    void VisitConcreteElementB(Element* elm);
};

#endif  /* _VISITOR_HPP_ */
