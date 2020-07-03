#ifndef _SINGLETON_HPP_
#define _SINGLETON_HPP_

class Singleton {
public:
    static Singleton* Instance();
protected:
    Singleton();
private:
    static Singleton* instance;
};


#endif  /* _SINGLETON_HPP_ */

