#ifndef __COMPLEX__ //防卫式声明
#define __COMPLEX__

class complex
{
public:
    complex(double r = 0, double i = 0) : re(r), im(i) {} //初值列

    complex &operator+=(const complex &); //成员函数,定义在class外部
    double real() const { return re; }    //函数里不会修改 data 时一定要加上 const
    double imag() const { return im; }

private:
    double re, im;
    friend complex &__doapl(complex *, const complex &); // 友元
};

// 外部成员函数
inline complex &                      //不一定真的会变成inline
complex::operator+=(const complex &r) //左边会作为隐藏参数 this
{
    return __doapl(this, r);
}

inline complex &
__doapl(complex *ths, const complex &r)
{
    ths->re += r.re;
    ths->im += r.im;
    return *ths;
}

//全局函数
inline double
real(const complex &x)
{
    return x.real();
}

inline double
imag(const complex &x)
{
    return x.imag();
}

inline complex
operator+(const complex &x, const complex &y) //参数都是右值,所以用const
{
    return complex(real(x) + real(y), imag(x) + imag(y)); //可以直接用类名()
}

#include <iostream>
using namespace std;
ostream &
operator<<(ostream &os, const complex &x)
{
    return os << '(' << real(x) << ',' << imag(x) << ')';
}

#endif