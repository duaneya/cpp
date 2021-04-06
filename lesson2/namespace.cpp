using namespace std;

//-----------------------
#include <iostream>
#include <memory> // shared_ptr

namespace jj01
{
    void test_member_template() {}
}

    //-------------------------

#include <iostream>
#include <list>
namespace jj02
{
    void test_member_template() {}
}


int main()
{
    jj01::test_member_template();
    jj02::test_member_template();
}