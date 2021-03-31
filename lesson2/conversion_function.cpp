class Fraction
{
public:
    Fraction(int num, int den=1):m_numerator(num),m_denominator(den){}


    // 转换函数，没有return type，也不需要参数
    // 通常不改变class，所以通常加const
    operator double() const {
        return (double)(m_numerator / m_denominator);
    }

private:
    int m_numerator;
    int m_denominator;
};


int main()
{
    Fraction f(3, 5);
    double d = 4 + f; //调用operator double
    // 先寻找全局函数 + ，再寻找f转为double
}