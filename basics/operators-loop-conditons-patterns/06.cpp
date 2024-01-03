#include <iostream>
using namespace std;

int main()
{
    int p, t;
    double r;
    cout << "give principal , rate , time" << endl;
    cin >> p >> r >> t;
    double result = (p * r * t) / 100;
    cout << "Principal interest is " << result << endl;
}