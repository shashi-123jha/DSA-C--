// we have to tell weather a number is prime not 
// prime no is a number which will devide devide only by 1 and ists own 

#include<iostream>
using namespace std;

int main() {

  int n , i ; 
  
cout<<"enter your first no ";
cin>>n;

if (n<2)
{
cout<<"the given number is not prime";
// hear program will stoped because we used return 0 it means end the program 
return 0 ;

} else 
{

for ( i = 2; i < n; i++)
{
    /* code */
    if (n % i == 0)
    {
     
   cout<< "the number is not prime";
   return 0 ;
    }
    
}

cout<<"the number is prime number";


}

}