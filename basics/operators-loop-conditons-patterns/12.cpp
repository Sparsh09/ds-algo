#include <iostream>
using namespace std;

int main()
{
    cout << "enter three numbers \n";
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "The max is " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "The max is " << b << endl;
    }
    else
    {
        cout << "The max is " << c << endl;
    }
}