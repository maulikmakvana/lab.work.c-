#include <iostream>
using namespace std;

main()
{  
    // Swap two variables using the third variable.
    int a , b ;
    cout << "enter first numbar A : ";
    cin >> a ; //2
    cout << "enter second numbar B : ";
    cin >> b ; //4

    int c = a; // c = 2
    a = b;     // a = 4
    b = c;     // b = 2
    
    cout << endl
         << "A: " << a<< endl
         << "B: " << b;



}