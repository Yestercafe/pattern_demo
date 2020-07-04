#include "Composite.hpp"
#include "Component.hpp"
#include <vector>
#include <algorithm>

Composite::Composite()
{ }

Composite::~Composite()
{ }

void Composite::Operation()
{
    for(auto comIter = comVec.begin(); comIter != comVec.end(); comIter++) {
        (*comIter)->Operation();
    }
}

void Composite::Add(Component* com)
{
    comVec.push_back(com);
}

void Composite::Remove(Component* com)
{
    std::remove(comVec.begin(), comVec.end(), com);
}

Component* Composite::GetChild(int index)
{
    return comVec[index];
}
