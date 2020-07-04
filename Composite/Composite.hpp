#ifndef _COMPOSITE_HPP_
#define _COMPOSITE_HPP_
#include "Component.hpp"
#include <vector>

class Composite : public Component {
public:
    Composite();
    ~Composite();
    void Operation();
    void Add(Component* com);
    void Remove(Component* com);
    Component* GetChild(int index);
private:
    std::vector<Component*> comVec;
};

#endif  /* _COMPOSITE_HPP_ */
