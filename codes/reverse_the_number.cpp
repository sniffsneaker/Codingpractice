// this program is to reverse a number ... ex : 1080 reverse is 801 

#include <bits/stdc++.h>
using namespace std ;

int main()
{
    // this program is to find the number of digits in a number 
    int n ,count = 0 ,reversenum = 0; 
    cout << "Enter your input integer number : " ;
    cin >> n ; 
    int a = n ;
    int numberofdigits = log10(n) + 1 ;
    cout <<"The number of digits in the given number is " << numberofdigits << endl ; 
    while(n>0) 
    {
     int lastdigit = n%10 ;
     reversenum = lastdigit*pow(10,numberofdigits-1)  + reversenum ; 
     numberofdigits-- ; 
     n = n/10 ;
    }
    
    cout << "\nThe reverse number of given number is " << reversenum ; 
    if(reversenum == a) 
    {
        cout << "\nThe given number is " << a <<" is a palindrome" ;
    }
    else
    {
        cout << "\nThe given number is " << a <<" is not a palindrome" ;
    }
    return 0;
}

