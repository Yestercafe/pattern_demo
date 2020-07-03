#include "Singleton.hpp"
#include <iostream>

Singleton* Singleton::instance = nullptr;

Singleton::Singleton()
{
    std::cout << "Singleton..." << std::endl;
}

Singleton* Singleton::Instance()
{
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
}