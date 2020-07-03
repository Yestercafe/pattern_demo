#ifndef _PRODUCT_HPP_
#define _PRODUCT_HPP_

class Product {
public:
    virtual ~Product() = 0;
protected:
    Product();
};

class ConcreteProduct  : public Product {
public:
    ~ConcreteProduct();
    ConcreteProduct();
};

#endif  /* _PRODUCT_HPP_ */
