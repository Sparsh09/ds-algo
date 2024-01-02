#include <iostream>
using namespace std;

int main()
{
    cout << "enter a string" << endl;
    string a;
    cin >> a;
    string tempString;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        tempString += a[i];
    }
    cout << tempString << endl
         << a << endl;
    if (tempString == a)
        cout << "plaindrome";
    else
        cout << "not palindrome";
}