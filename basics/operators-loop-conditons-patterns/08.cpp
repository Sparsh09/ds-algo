#include <iostream>
using namespace std;

int main()
{
    cout << "Enter n number for factorial " << endl;
    int n;
    cin >> n;

    int result = 1;
    while (n > 0)
    {
        result *= n;
        n = n - 1;
    }
    cout << "Factorial is " << result << endl;
}