#ifndef _DIRECTOR_HPP_
#define _DIRECTOR_HPP_

class Builder;

class Director {
public:
    Director(Builder* bld);
    ~Director();
    void Construct();
private:
    Builder* bld;
};

#endif  /* _DIRECTOR_HPP_ */
