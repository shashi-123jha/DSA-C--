#include<iostream>

using namespace std ; 

int main() {

// calculate the power of the n  

int n  , number; 
int p , i ;

cout<< "enter the number ans power :- \n";
cin>>n ;
cin>>p;

 number = n ;

for (i = 1; i<p; i = i+1)
{
    /* code */
 number=number*n ; 
}

cout<<number ;



}