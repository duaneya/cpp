#include "io.h"

void first(void);
void second(void);

int main()
{
    first();
    first();
    second();
    second();

}

void first(void)
{
    cout << "Three blind mice" << endl;
}
void second(void)
{
    cout << "See how they run" << endl;
}