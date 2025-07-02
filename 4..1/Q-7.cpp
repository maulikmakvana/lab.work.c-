#include <iostream>
using namespace std;

main()
{

    int x , y , z;
    cout <<"Enter the value of x :";
    cin>> x ;
    cout <<"Enter the value of y :";
    cin>> y ;
    cout <<"Enter the value of z :";
    cin>> z ;
    int result=( x + y + z )*( x + y + z );
    cout<<"( x + y + z )^2="<< result << endl;

}