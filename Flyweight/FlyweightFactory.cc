#include "FlyweightFactory.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

FlyweightFactory::FlyweightFactory()
{ }

FlyweightFactory::~FlyweightFactory()
{ }

Flyweight* FlyweightFactory::GetFlyweight(const std::string& key)
{
    auto iter = std::find_if(fly.begin(), fly.end(), 
        [&](Flyweight* rhs) {
            return rhs->GetIntrinsicState() == key;
        });
    if(iter != fly.end()) {
        std::cout << "Already created by users..." << std::endl;
        return *iter;
    } else {
        Flyweight* fw = new ConcreteFlyweight(key);
        fly.push_back(fw);
        return fw;
    }
}
