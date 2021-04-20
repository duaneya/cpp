#include "io.h"

int main()
{
    const float FACTOR{12.0f};
    int height;
    cout << "_ feet\b\b\b\b\b\b";
    cin >> height;
    cout << height / FACTOR << "inch" << endl;
    
}