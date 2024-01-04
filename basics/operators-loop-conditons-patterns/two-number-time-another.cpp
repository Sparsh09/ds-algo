#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter base and number of times " << endl;
    cin >> a >> b;
    int ans = 1;
    bool flag = false;
    if (b < 0)
    {
        b = -b;
        flag = true;
    }
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    if (flag)
    {
        ans = 1 / ans;
    }
    cout << ans;
}