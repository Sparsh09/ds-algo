#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number " << endl;
    cin >> n;
    int result = 1;
    while (n > 0)
    {
        result *= n--;
    }
    cout << "The factorial is " << result << endl;
}