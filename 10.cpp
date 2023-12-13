#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the sides of the triangle " << endl;
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        cout << " triangle is valid " << endl;
    }
    else
    {
        cout << " triangle is invalid " << endl;
    }
}