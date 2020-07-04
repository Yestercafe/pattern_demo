#ifndef _ADAPTER_HPP_
#define _ADAPTER_HPP_

class Target {
public:
    Target();
    virtual ~Target();
    virtual void Request();
};

class Adaptee {
public:
    Adaptee();
    ~Adaptee();
    void SpecificRequest();
};

class Adapter : public Target {
public:
    Adapter(Adaptee* ade);
    ~Adapter();
    void Request();
private:
    Adaptee* ade;
};

#endif  /* _ADAPTER_HPP_ */
