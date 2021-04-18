#include "io.h"

float CtoF(float);

int main()
{
    cout << "Please enter a Celsius value: ";
    float C;
    cin >> C;
    cout << C << " degrees Celsius is " << CtoF(C) << " degrees Fahrenheit" << endl;
}

float CtoF(float C)
{
    return 1.8 * C + 32.0;
}
