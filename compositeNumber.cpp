#include <iostream>
using namespace std;

void compositeNumber(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is a composite number ";
            break;
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    compositeNumber(n);
}