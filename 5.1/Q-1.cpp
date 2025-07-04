#include <iostream>
using namespace std;

int main()
{
    float a, b;

    cout << "Enter your first number: ";
    cin >> a;

    cout << "Enter your second number: ";
    cin >> b;

    if (a > b)
    {
        cout << "\nMinimum number: " << b << endl;
    }

    else if (a < b)
    {
        cout << "\nMinimum number: " << a << endl;
    }

    return 0;
}
