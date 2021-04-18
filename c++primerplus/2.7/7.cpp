#include "io.h"

void displaytime(int, int);

int main()
{
    cout << "Enter the number of hours: ";
    int hours;
    cin >> hours;
    cout << "Enter the number of minutes: ";
    int minutes;
    cin >> minutes;
    displaytime(hours, minutes);
}

void displaytime(int hours, int minutes)
{
    cout << "Time: " << hours << ":" << minutes << endl;
}