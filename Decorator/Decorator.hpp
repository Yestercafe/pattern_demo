#ifndef _DECORATOR_HPP_
#define _DECORATOR_HPP_

class Component {
public:
    virtual ~Component();
    virtual void Operation();
protected:
    Component();
};

class ConcreteComponent : public Component {
public:
    ConcreteComponent();
    ~ConcreteComponent();
    void Operation();
};

class Decorator : public Component {
public:
    Decorator(Component* com);
    virtual ~Decorator();
    void Operation();
protected:
    Component* com;
};

class ConcreteDecorator : public Decorator {
public:
    ConcreteDecorator(Component* com);
    ~ConcreteDecorator();
    void Operation();
    void AddedBehavior();
};

#endif  /* _DECORATOR_HPP_ */
