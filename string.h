#ifndef __MYSTRING__
#define __MYSTRING__
#include <cstring>
// big three
// 带指针的class必须要实现 1:拷贝构造 2:拷贝赋值 3:析构函数
class String
{
public:
    String(const char *cstr = 0);
    String(const String &str);
    String &operator=(const String &str);
    ~String();
    char *get_c_str() const { return m_data; };

private:
    char *m_data;
};

inline String::String(const char *cstr = 0)
{
    if (cstr)
    {
        m_data = new char[strlen(cstr) + 1];
        strcpy(m_data, cstr);
    }
    else
    {
        m_data = new char[1];
        *m_data = '\0';
    }
}

inline String::~String()
{
    delete[] m_data; //要把new出来的内存释放掉
}

inline String::String(const String &str)
{
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
}
inline String &String::operator=(const String &str)
{
    if (this == &str) //检测自我赋值
        return *this;
    delete[] m_data;
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
    return *this;
}
#endif