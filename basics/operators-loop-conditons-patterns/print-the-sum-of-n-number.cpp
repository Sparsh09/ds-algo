#include <iostream>
using namespace std;

void method1(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum of the " << n << " number is " << sum << endl;
}

void method2(int n)
{
    int sum = ((n + 1) * n) / 2;
    cout << "The sum of the " << n << " number is " << sum << endl;
}
int main()
{
    int n;
    cout << "Enter the  number " << endl;
    cin >> n;

    method1(n);
    method2(n);
}