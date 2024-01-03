#include <iostream>
using namespace std;

int main()
{

    cout << "Enter a number to check prime or not" << endl;
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "Number is prime " << n << endl;
    }
    else
    {
        cout << "Number is not prime " << n << endl;
    }
}