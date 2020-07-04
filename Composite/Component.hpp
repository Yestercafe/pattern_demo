#ifndef _COMPONENT_HPP_
#define _COMPONENT_HPP_

class Component {
public:
    Component();
    virtual ~Component();
    virtual void Operation() = 0;
    virtual void Add(const Component&);
    virtual void Remove(const Component&);
    virtual Component* GetChild(int index);
};

#endif  /* _COMPONENT_HPP_ */
