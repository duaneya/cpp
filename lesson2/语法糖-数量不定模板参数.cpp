// variadic templates c++11
#include <iostream>
#include <bitset>
using namespace std;
void print() // 最后args没有东西时调用这个
{

}

template <typename T, typename... Types>
void print(const T& firstArg, const Types&... args)
{
    cout << firstArg << endl;
    cout << sizeof...(args) << endl;
    print(args...); // 一种用法
    
}

int main()
{
    print(7.5, "hello", bitset<16>(377), 42);
}