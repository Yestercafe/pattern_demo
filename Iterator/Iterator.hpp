#ifndef _ITERATOR_HPP_
#define _ITERATOR_HPP_

class Aggregate;
using Object = int;

class Iterator {
public:
    virtual ~Iterator();
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() = 0;
    virtual Object CurrentItem() = 0;
protected:
    Iterator();
};

class ConcreteIterator : public Iterator {
public:
    ConcreteIterator(Aggregate* ag, int idx = 0);
    ~ConcreteIterator();
    void First();
    void Next();
    bool IsDone();
    Object CurrentItem();
private:
    Aggregate* ag;
    int idx;
};

#endif  /* _ITERATOR_HPP_ */
