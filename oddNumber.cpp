#include <iostream>
using namespace std;

void printOdd1()
{
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
}

void printOdd2()
{
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
            continue;

        cout << i << endl;
    }
}
int main()
{
    printOdd1();
    printOdd2();
}