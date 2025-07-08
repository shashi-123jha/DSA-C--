#include<iostream>
using namespace std ;

// the question is to print the fibbonachi series in ths the first no == 0 ;  second bo == 1 third no = first no + second no ;

int main(){

int a = 0;
int c , b = 1 ; 

int n = 10 ; 

for (int i = 0; i < n; i++)
{
c = a + b ; 
cout<< c <<"\n" ;
 a = b;
 b = c;

}



}