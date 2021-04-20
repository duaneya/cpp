#include "io.h"

int main()
{
    long long world_population;
    long long us_popolation;
    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of the US: ";
    cin >> us_popolation;
    double fraction = static_cast<double>(us_popolation) / world_population; //static_cast<double>(world_population);
    cout << "The population of the US is " << fraction * 100 << "% of the world population." << endl;
}