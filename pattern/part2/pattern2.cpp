#include<iostream>
using namespace std ;

int main() {

/*  1
    1 2
    1 2 3
    1 2 3 4 
    1 2 3 4 5 
     
*/

int n  = 1 ; 
 for (int i = 1; i <=5 ; i++)
 {
  for (int j = 1; j <=n; j++)
  {
    /* code */
    cout<<j<<" ";
    
  }
  cout<<endl;

  n = n+1 ; 
  
 }
 
}