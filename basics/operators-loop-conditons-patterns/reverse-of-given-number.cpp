#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number " << endl;
    cin >> n;
    int revNum = 0, tempNum = n;

    while (tempNum > 0)
    {
        revNum = revNum * 10 + tempNum % 10;
        tempNum /= 10;
    }

    cout << "The reverse of " << n << " is " << revNum << endl;
}