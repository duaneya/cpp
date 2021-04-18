#include <iostream>
using namespace std;
// int x = 0;
// int *p = &x;
// int &r = x;
// int x2 = 5;

// r = x2; // r不能重新代表其他物体，现在r，x都是5
// int &r2 = r; // 现在r2是5，r2，r，x一个东西

// sizeof(r) == sizeof(x); // true
// &x == &r; // true

typedef struct Stag
{
    int a, b, c, d;
} S;
int main()
{
    double x = 0;
    double *p = &x;
    double &r = x;

    cout << sizeof(x) << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(r) << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << x << endl;
    cout << r << endl;
    cout << &x << endl;
    cout << &r << endl;
    S s;
    S &rs = s;
    cout << sizeof(s) << endl;
    cout << sizeof(rs) << endl;
    cout << &s << endl;
    cout << &rs << endl;
}
