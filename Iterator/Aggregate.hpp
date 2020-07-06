#ifndef _AGGREGATE_HPP_
#define _AGGREGATE_HPP_
#include <cstddef>

class Iterator;
using Object = int;
class Interator;

class Aggregate {
public:
    virtual ~Aggregate();
    virtual Iterator* CreateIterator() = 0;
    virtual Object GetItem(int idx) = 0;
    virtual int GetSize() = 0;
protected:
    Aggregate();
};

class ConcreteAggregate : public Aggregate {
public:
    ConcreteAggregate();
    ~ConcreteAggregate();
    Iterator* CreateIterator();
    Object GetItem(int idx);
    int GetSize();
private:
    constexpr static std::size_t SIZE = 3u;
    Object objs[SIZE];
};

#endif  /* _AGGREGATE_HPP_ */
