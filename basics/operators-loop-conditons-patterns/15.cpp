#include <iostream>
using namespace std;

void printHollowInvertedHalfPyramid()
{
    cout << "Enter number of rows " << endl;
    int n;
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        if (i == n || i == 1)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            for (int k = 0; k < i; k++)
            {
                if (k == 0 || k == i - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
}

void printHollowInvertedHalfPyramid2()
{
    cout << "Enter number of rows " << endl;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || j == n - i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
    printHollowInvertedHalfPyramid();
    printHollowInvertedHalfPyramid2();
}