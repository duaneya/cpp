#include <iostream>
class A
{
public:
    static A &getInstance();
    void setup()
    {
        std::cout << 's' << std::endl;
    }

private:
    A() = default;
    // {
    //     std::cout << "constructor called!" << std::endl;
    // }
    A(const A &rhs) = default;
    ;
};
A &A::getInstance()
{
    static A a;
    return a;
}

int main()
{
    A::getInstance().setup();
}