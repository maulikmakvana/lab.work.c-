#include <iostream>
using namespace std;

main()
{
    // find if a given number is neutral or not
     float a ;

     cout <<"Enter your number";
     cin>> a ;


     if (  0 > a )
     {
        cout << "This number is Negative" <<  endl ;
                                          
                                                 
     }

     else if (1 > a   &&  -1 < a )
     {
        cout << "This number is Neutral" << endl ;
                                        
     }

     else if (0 < a )
     {
        cout << "This number is Positive" << endl ; 
                                          
                                        
     }

      
     return 0;


}
