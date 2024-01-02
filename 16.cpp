#include <iostream>
using namespace std;

void printHollowFullPyramid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows * 2 - 1; j++)
        {
            if (j == rows + i - 1 || j == rows - i - 1 || i == rows - 1)
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

void invertPyramid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows * 2 - 1; j++)
        {

            cout << "* ";
        }
    }
}

void printFullPyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 0; k <= rows - i - 1; k++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printFullPyramid2(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        int k = 0;
        for (int j = 0; j <= rows * 2 - 1; j++)
        {
            if (j < rows - i - 1)
            {
                cout << "  ";
            }
            else if (k < 2 * i + 1)
            {
                cout << "* ";
                k++;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void test(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        if (i < (rows + 1) / 2)
        {
            for (int j = 0; j <= rows; j++)
            {
                if (j >= ((rows + 1) / 2) - i && j <= ((rows + 1) / 2) + i)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        else
        {
            for (int j = 0; j < rows; j++)
            {
                if (j >= (i - rows / i) && j <= (i + rows / i))
                {
                    cout << j << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << "second` half" << endl;
        }
        cout << endl;
    }
}
int main()
{

    int rows;
    cout << "Enter number of rows " << endl;
    cin >> rows;

    // printFullPyramid(rows);
    // cout << "-----------------" << endl;
    // printHollowFullPyramid(rows);
    // cout << "-----------------" << endl;
    printFullPyramid2(rows);
    // test(rows);
}