#include "Singleton.hpp"
#include <iostream>

int main()
{
    Singleton* s = Singleton::Instance();
    Singleton* s1 = Singleton::Instance();

    return 0;
}