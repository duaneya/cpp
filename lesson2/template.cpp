#include <iostream>
// 类模板
template <typename T>
class complex
{
public:
    complex(T r = 0, T i = 0) : re(r), im(i) {}
private:
    int re, im;
};

// 函数模板
template <class T>
inline const T &min(const T &a, const T &b)
{
    return b < a ? b : a;
}

// 成员模板
template <class T1, class T2>
struct pair
{
    typedef T1 first_type;
    typedef T2 second_type;

    T1 first;
    T2 second;

    pair() : first(T1()), second(T2()) {}
    pair(const T1 &a, const T2 &b) : first(a), second(b) {}

    // 成员模板
    template <class U1, class U2>
    pair(const pair<U1, U2> &p) : first(p.first), second(p.second) {}
};
class Base1
{
};
class Derived1 : public Base1
{
};

class Base2
{
};
class Derived2 : public Base2
{
};

int main()
{
    pair<Derived1, Derived2> p;
    pair<Base1, Base2> p2(p);
    // pair<Base1, Base2> p2(pair<Derived1, Derived2>());
    
}
