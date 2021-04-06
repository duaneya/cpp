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
    A(const A &rhs) = delete;
    
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