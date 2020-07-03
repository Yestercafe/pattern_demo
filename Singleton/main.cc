#include "Singleton.hpp"
#include <iostream>

int main()
{
    Singleton::Instance();
    Singleton::Instance();

    return 0;
}