#include "Flyweight.hpp"
#include "FlyweightFactory.hpp"
#include <iostream>

int main()
{
    auto ff = new FlyweightFactory();
    auto fw1 = ff->GetFlyweight("hello");
    auto fw2 = ff->GetFlyweight("world");
    auto fw3 = ff->GetFlyweight("hello");

    return 0;
}
