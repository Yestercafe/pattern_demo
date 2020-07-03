#ifndef _BUILDER_HPP_
#define _BUILDER_HPP_
#include <string>

class Product;

class Builder {
public:
    virtual ~Builder();
    virtual void BuildPartA(const std::string& buildPara) = 0;
    virtual void BuildPartB(const std::string& buildPara) = 0;
    virtual void BuildPartC(const std::string& buildPara) = 0;
    virtual Product* GetProduct() = 0;
protected:
    Builder();
};

class ConcreteBuilder : public Builder {
public:
    ConcreteBuilder();
    ~ConcreteBuilder();
    void BuildPartA(const std::string& buildPara);
    void BuildPartB(const std::string& buildPara);
    void BuildPartC(const std::string& buildPara);
    Product* GetProduct();
};

#endif  /* _BUILDER_HPP_ */
