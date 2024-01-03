#include <iostream>
using namespace std;

int main()
{
    cout << "Enter n number " << endl;
    int n;
    cin >> n;
    while (n > 0)
    {
        cout << n << endl;
        n = n - 1;
    }
}