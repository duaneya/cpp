// template template parameter
#include <string>
#include <list>
#include <iostream>
using namespace std;

template<typename T, 
                    template <class>  // 和视频里不一样，这里不能也叫做T，可以啥都不写，因为下面没用到
                    class Container //https://stackoverflow.com/questions/39377928/g-6-errors-on-shadowed-template-parameters-while-g-5-does-not?noredirect=1
        >
class XCls
{
private:
    Container<T> c;
public:
};
template <typename T>
using Lst = list<T, allocator<T>>;






int main()
{
    
    //XCls<string, list> mylst1; // 符合模板参数，但是实际上不能这样写，错误, 必须要指定list模板第二个参数
    XCls<string, Lst> mylst2;
    cout << __cplusplus << endl;
}
