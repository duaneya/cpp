// 仿函数
template<class T>
struct identity : public unary_function<T,T>
{
    /* data */
    const T &operator()(const T &x) const { return x; }
};

template <class Pair>
struct select1st : public unary_function<Pair, typename Pair::first_type>
{
    /* data */
    const typename Pair::first_type &operator()(const Pair &x) const { return x.first; }
};

template <class Pair>
struct select2nd : public unary_function<Pair, typename Pair::second_type>
{
    /* data */
    const typename Pair::second_type &operator()(const Pair &x) const { return x.second; }
};
template <class T1, class T2>
struct pair
{
    T1 first;
    T2 second;
    pair():first(T1()),second(T2()) {}
    pair(const T1& a, const T2& b) : first(a), second(b) {}
};

template<class T>
struct plus : public binary_function<T,T,T>
{
    T operator()(const T &x, const T &y) const { return x + y; }
};

template<class Arg, class Result>
struct unary_function
{
    typedef Arg argument_type;
    typedef Result result_type;
};
// 理论上内存为0

template<class Arg1, class Arg2,class Result>
struct binary_function
{
    typedef Arg1 first_argument_type;
    typedef Arg2 second_argument_type;
    typedef Result result_type;
};

// less<int>::result_type -> bool