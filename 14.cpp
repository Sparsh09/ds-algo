#include <iostream>
using namespace std;

void printCompleteLine(int cols)
{
    for (int col = 0; col < cols; col++)
    {
        cout << "* ";
    }
    cout << endl;
}

void printHollowLine(int cols)
{
    cout << "* ";
    for (int col = 0; col < cols; col++)
    {
        cout << "  ";
    }
    cout << "* ";
}

void hollowSquarePattern(int rows)
{
    printCompleteLine(rows);
    for (int row = 0; row < rows - 2; row++)
    {
        printHollowLine(rows - 2);
        cout << endl;
    }
    printCompleteLine(rows);
}
void hollowSquarePattern2(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == rows - 1)
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
    cout << "Enter number of rows " << endl;
    int rows;
    cin >> rows;

    hollowSquarePattern(rows);
    hollowSquarePattern2(rows);
}