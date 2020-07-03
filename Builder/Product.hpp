#ifndef _PRODUCT_HPP_
#define _PRODUCT_HPP_

class Product {
public:
    Product();
    ~Product();
    void ProducePart();
};

class ProductPart {
public:
    ProductPart();
    ~ProductPart();
    ProductPart* BuildPart();
};

#endif  /* _PRODUCT_HPP_ */
