// 模板泛化
template<class Key>
struct hash
{
    
};

// 模板特化
template<>
struct hash<char>
{
    size_t operator()(char x) const { return x; }
};

template<>
struct hash<int>
{
    size_t operator()(int x) const { return x; }
};

template<>
struct hash<long>
{
    size_t operator()(long x) const { return x; }
};

// cout << hash<long>()(1000) 第一个括号是生成临时对象，第二个是函数调用

// 模板偏特化
// 1. 个数上的偏
template<typename T, typename Alloc=...>
class vector
{
};
template<typename Alloc=...>
class vector<bool, Alloc> // 第一个绑定成了 bool
{
};

// 2. 范围的偏
template<typename T>
class C
{
};
template<typename T>
class C<T*>  // T是个指针的情况
{
};