#ifndef _FACTORY_HPP_
#define _FACTORY_HPP_

class Product;

class Factory
{
public:
    virtual ~Factory() = 0;
    virtual Product* CreateProduct() = 0;
protected:
    Factory();
};

class ConcreteFactory : public Factory {
public:
    ~ConcreteFactory();
    ConcreteFactory();
    Product* CreateProduct();
};

#endif  /* _FACTORY_HPP_ */
