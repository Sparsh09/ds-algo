#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3;
    cout << "Give three sides of triangle" << endl;
    cin >> side1 >> side2 >> side3;
    int perimeter = side1 + side2 + side3;
    cout << "Perimeter of triangle is " << perimeter << endl;
}