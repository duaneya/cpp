#include "io.h"

int main()
{
    int degrees, minutes, seconds;
    cout << "Enter a latitude in degrees, minutes, and seconds " << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    cout << degrees << " degrees"
         << "," << minutes << " minutes," << seconds << " seconds = " << degrees + seconds / 3600.0 + minutes / 60.0 << " degrees" << endl;
}