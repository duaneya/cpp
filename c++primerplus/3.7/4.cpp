#include "io.h"

int main()
{
    long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    cout << seconds << " seconds = " << seconds / (60 * 60 * 24) << " days, " << seconds % (60 * 60 * 24) / (60 * 60) << " hours, " << seconds % (60 * 60 * 24) % (60 * 60) / 60 << " minutes " << seconds % (60 * 60 * 24) % (60 * 60) % 60 << " seconds" << endl;

}