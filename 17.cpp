#include <iostream>
using namespace std;

void createNumberTriangle(int rows)
{
    int count = 1;
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
int main()
{

    cout << "Enter number of rows";
    int rows;
    cin >> rows;
    createNumberTriangle(rows);
}