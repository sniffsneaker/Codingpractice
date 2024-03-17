// this program is to reverse a number  ex : 1080 reverse is 801 

#include <bits/stdc++.h>
using namespace std ;

int main()
{
    // this program is to find the number of digits in a number 
    int n ,count = 0 ,reversenum = 0; 
    cin >> n ; 
    int numberofdigits = log10(n) + 1 ;
    cout << numberofdigits << endl ; 
    while(n>0) 
    {
     int lastdigit = n%10 ;
     cout << lastdigit ; 
     reversenum = lastdigit*pow(10,numberofdigits-1)  + reversenum ; 
     numberofdigits-- ; 
     n = n/10 ;
    }
    
    cout << "\n" << reversenum ; 
    
    return 0;
}
