class Fraction
{
public:
    // 只需要一个参数，第二个可以省去， one-argument
    // 没有explicit关键字，这个关键字基本只用于构造函数前面
    Fraction(int num, int den=1):m_numerator(num),m_denominator(den){}

    Fraction operator+(const Fraction& f){
        return Fraction(this->m_numerator+f.m_numerator,this->m_denominator*f.m_denominator);
    }

private:
    int m_numerator;
    int m_denominator;
};


int main()
{
    Fraction f(3, 5);
    Fraction d = f + 4; //调用 non-explicit ctor，4转为Fraction
                      // 然后调用operator +
                      // f + 4 顺序不能颠倒
    // 如果还有转换函数double的话，编译器就不知道用哪个了
    // 构造函数加上explicit之后，构造函数就只用来构造了，4不会变成Fraction

}