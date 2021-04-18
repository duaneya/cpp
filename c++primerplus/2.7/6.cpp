#include "io.h"

double ltoa(float);

int main()
{
    cout << "Please enter the number of light years: ";
    float l;
    cin >> l;
    cout << l << " light years = " << ltoa(l) << " astronomical units" << endl;
}

double ltoa(float l)
{
    return 63240 * l;
}
