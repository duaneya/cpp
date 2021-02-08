#include "string.h"
#include <iostream>
using namespace std;
int main()
{
    String s1();
    String s2("hello");
    String s3(s1); //拷贝构造, 没写的话默认一个bit一个bit复制,有指针的不合适
    //String s3 = s1; 作用同上
    cout << s3 << endl;
    s3 = s2; //赋值
    cout << s3 << endl;

    String *p = new String("hellp");
    delete p;
}