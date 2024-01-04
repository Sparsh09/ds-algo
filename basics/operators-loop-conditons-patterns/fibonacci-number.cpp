#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the nth term " << endl;
    cin >> n;
    int firstTerm = 1, secondTerm = 1, ans;
    for (int i = 1; i < n - 1; i++)
    {
        ans = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = ans;
    }

    cout << secondTerm;
}