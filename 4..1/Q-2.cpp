#include <iostream>
using namespace std;

main()
{
    // without using a third variable.
    int a, b;
    cout << "enter first numbar A :";
    cin >> a; // 10
    cout << "enter second numbar B :";
    cin >> b; // 20

    a = a + b;     // a = 30
    b = a - b;     // b = 10
    a = a - b;     // a = 20

    cout << endl
         << "A: " << a << endl
         << "B: " << b;
}