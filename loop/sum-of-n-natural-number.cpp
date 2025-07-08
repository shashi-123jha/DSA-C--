// find the sum of the n natural number 
#include<iostream>
using namespace std ; 

int main() {

int n , sum =0; 
cout<<"enter the number to fund the sum of n natueal numbers:- \n"
;
cin>>n;


for (int i = 1; i <=n; i++)
{
    sum = sum +i ;
}

cout<<"the sum of the n natural number is = " << sum ; 


}