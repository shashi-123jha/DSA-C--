#include<iostream>
using namespace std ;

int main() {

/*   a b c d e 
     a b c d e 
     a b c d e 
     a b c d e 
     a b c d e 
     a b c d e 
     
*/

 for (int i = 1; i <=5; i++)
 {
  for (int j = 1; j <=5; j++)
  {
  char name = 'a' + (j-1) ; 
  cout<<name <<" ";
  }
  cout<<endl;
 
  
 }


}