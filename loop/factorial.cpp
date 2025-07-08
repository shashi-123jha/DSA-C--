#include<iostream>

using namespace std ; 

int main(){

// find the factorial of n natural number 

int n , fact=1 ;
cout<<"enter the number to find the factorial of n " ;

cin>> n ; 

for (int i = 1; i <=n; i++)
{
    /* code */
   
fact  = fact*i;

}

cout<< fact ; 



}
