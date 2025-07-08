#include<iostream>
using namespace std ; 

int main() {
    // converting decimal to the binary number 
    // eg 13 to convert in the binary number 

    int num = 13 ; 
    int rem , ans=0 , mul = 1;

    while (num > 0)
    {
      rem = num%2;
      num = num/2 ;  
      ans = rem*mul+ans ;
      mul = mul*10 ; 

    }
    cout<<ans<<endl;    
}