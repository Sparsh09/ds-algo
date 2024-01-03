#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number " << endl;
    cin >> n;

    int sum = 0, tempNum = n;

    while (tempNum > 0)
    {
        sum += tempNum % 10;
        tempNum /= 10;
    }

    cout << "The sum of " << n << " is " << sum << endl;
}