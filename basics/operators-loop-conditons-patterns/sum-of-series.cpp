// 1 - 2 + 3 - 4 + 5 - 6 ... n

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number " << endl;
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }

    cout << "Sum of the series is " << sum << endl;
    // or make pairs of two and the answer is  -(n/2) if n is even , if n is odd (-(n-1)/2 + n)
}