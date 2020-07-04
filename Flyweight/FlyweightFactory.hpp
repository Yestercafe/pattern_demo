#ifndef _FLYWEIGHTFACTORY_HPP_
#define _FLYWEIGHTFACTORY_HPP_
#include "Flyweight.hpp"
#include <string>
#include <vector>

class FlyweightFactory {
public:
    FlyweightFactory();
    ~FlyweightFactory();
    Flyweight* GetFlyweight(const std::string& key);
private:
    std::vector<Flyweight*> fly;
};

#endif  /* _FLYWEIGHTFACTORY_HPP_ */
