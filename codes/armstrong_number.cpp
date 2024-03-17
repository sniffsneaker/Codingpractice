// this program is to find if a number is armstrong or not 

#include <bits/stdc++.h>
using namespace std ;

int main()
{
    // this program is to find the number of digits in a number 
    long long int n ,count = 0,arm_coefficient = 0 ; 
    cout << "Enter your input integer number : " ;
    cin >> n ; 
    int a = n ;
    int numberofdigits = log10(n) + 1 ;
    cout <<"The number of digits in the given number is " << numberofdigits << endl ; 
    while(n>0) 
    {
     int lastdigit = n%10 ;
     arm_coefficient = pow(lastdigit,numberofdigits)  + arm_coefficient ; 
     n = n/10 ;
    }
    
    if(arm_coefficient == a){
        cout << "\nThe given number "<< a << "is armstrong number " ; 
    }
    else{
        cout << "The given number %d is not an armstrong number" , a ;
    }

    return 0;
}
