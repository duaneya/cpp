#include <list>
using namespace std;
// 1 指针
template<class T>
class shared_ptr
{
public:
    // 一定要实现下面
    T& operator*() const
    { return *px; }
    T* operator->() const 
    {
        return px;
    }
    shared_ptr(T* p) : px(p) {}
private:
    T *px;
    long *pn;
};
struct Foo
{
    /* data */
    void method(void) {}
};

// 2 迭代器
template<class T>
struct __list_node
{
    void *prev;
    void *next;
    T data;
};

template<class T, class Ref, class Ptr>
struct __list_iterator
{
    typedef __list_iterator<T, Ref, Ptr> self;
    typedef Ptr pointer;
    typedef Ref reference;
    typedef __list_node<T> *link_type;
    link_type node;
    bool operator==(const self &x) const { return node == x.node; }
    bool operator!=(const self &x) const { return node != x.node; }
    reference operator*() const { return (*node).data; }
    pointer operator->() const { return &(operator*()); } // 
    self &operator++() { node = (link_type)((*node).next); }
    self operator++(int) { 
        self tmp = *this;
        ++*this;
        return tmp;
    }
    self& operator--() { node = (link_type)((*node).prev); }
    self operator--(int) {
        self tmp = *this;
        --*this;
        return tmp;
    }
};

int main()
{
    // 智能指针
    shared_ptr<Foo> sp(new Foo);
    Foo f(*sp);
    sp->method(); // 箭头符号作用下去得到的结果会继续作用下去
                  // sp->method() => px->method()


    // 迭代器
    list<Foo>::iterator ite;
    *ite;
    ite->method();
}
