#include "Director.hpp"
#include "Builder.hpp"

Director::Director(Builder* bld)
{
    this->bld = bld;
}

Director::~Director()
{ }

void Director::Construct()
{
    bld->BuildPartA("user-defined");
    bld->BuildPartB("user-defined");
    bld->BuildPartC("user-defined");
}
