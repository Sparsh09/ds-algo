#include <iostream>
using namespace std;

bool primeNum(int n)
{
    bool res = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            res = false;
            break;
        }
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    bool res = primeNum(n);
    if (res)
    {
        cout << n << " is a prime number";
    }
    else
    {
        cout << n << " is not a prime number";
    }
}