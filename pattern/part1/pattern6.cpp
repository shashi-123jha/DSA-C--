#include<iostream>
using namespace std ;

int main() {

/*   1  2  3  4  5
     6  7  8  9  10
     11 12 13 14 15
     16 17 18 19 20 
     21 22 23 24 25 
     
*/

// at first we took a variable 
int n = 1 ; 

// ye hh column jo ki 5 bar chalegfa 
 for (int i = 1; i <=5; i++)
 {
    // ye hh row jisme print hoo rha hh ye 5 bar loop chalega 
  for (int j = 1; j <=5; j++){
  
  // humne n ko print karaya hh jo ki har bar +1 ho rha hh 
  cout<<n <<" ";
  n =n+1;

  }
  // 5 bar ye print hone ke baad ye agle line me 6 se suru hoga .
  cout<<endl;

  
 }


}