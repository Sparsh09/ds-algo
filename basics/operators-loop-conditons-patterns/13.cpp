#include <iostream>
using namespace std;

void solidSquarePattern(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    cout << "Enter n number " << endl;
    int n;
    cin >> n;

    solidSquarePattern(n);
}