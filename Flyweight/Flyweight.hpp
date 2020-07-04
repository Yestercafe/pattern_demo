#ifndef _FLYWEIGHT_HPP_
#define _FLYWEIGHT_HPP_
#include <string>

class Flyweight {
public:
    virtual ~Flyweight();
    virtual void Operation(const std::string& extrinsicState);
    std::string GetIntrinsicState();
protected:
    Flyweight(const std::string& intrinsicState);
private:
    std::string intrinsicState;
};

class ConcreteFlyweight : public Flyweight {
public:
    ConcreteFlyweight(const std::string& intrinsicState);
    ~ConcreteFlyweight();
    void Operation(const std::string& extrinsicState);
};

#endif  /* _FLYWEIGHT_HPP_ */
