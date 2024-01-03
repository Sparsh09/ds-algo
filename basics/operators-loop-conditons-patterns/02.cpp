#include <iostream>
using namespace std;

void solidRectangle()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void squarePattern()
{
    cout << "Enter number of rows";
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printCompleteLine(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        cout << "* ";
    }
    cout << endl;
}

void printHollowLine(int cols)
{
    cout << "* ";
    for (int i = 0; i < cols - 2; i++)
    {
        cout << "  ";
    }
    cout << "*" << endl;
}

void emptySquare()
{
    cout << "Enter number of rows" << endl;
    int rows;
    cin >> rows;
    printCompleteLine(rows);
    for (int j = 0; j < rows - 2; j++)
    {
        printHollowLine(rows);
    }
    printCompleteLine(rows);
}

void hollowRectangle()
{
    cout << "Enter number of rows" << endl;
    int rows;
    cin >> rows;
    cout << "Enter number of columns" << endl;
    int cols;
    cin >> cols;
    for (int i = 0; i < rows; i++)
    {
        if (i == 0 || i == rows - 1)
        {
            printCompleteLine(cols);
        }
        else
        {
            printHollowLine(cols);
        }
    }
}

void halfPyramid()
{
    cout << " Enter number of rows " << endl;
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedHalfPyramid()
{
    cout << "Enter number of rows" << endl;
    int rows;
    cin >> rows;
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void numericHalfPyramid()
{
    cout << "Enter number of rows";
    int rows;
    cin >> rows;
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void invertedNumbericHalfPyramid()
{
    cout << "Enter number of rows";
    int rows;
    cin >> rows;

    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void fullPyramid()
{
    cout << "Enter number of rows";
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedFullPyramid()
{
    cout << "Enter number of rows";
    int rows;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < rows - i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void numberFullPyramid()
{
    cout << "Number of rows";
    int rows;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < rows - i; k++)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }

        cout << endl;
    }
}
int main()
{
    // solidRectangle();
    // squarePattern();
    // emptySquare();
    // hollowRectangle();
    // halfPyramid();
    // invertedHalfPyramid();
    // numericHalfPyramid();
    // invertedNumbericHalfPyramid();
    // fullPyramid();
    // invertedFullPyramid();
    numberFullPyramid();
}