#include<iostream>
using namespace std ;

int main(){

// this first loop is for the row 
for ( int i = 1 ;i <=5; i++)
{
  for (int j = 1; j < 5-i; j++)
  {
    cout<<" ";
  }

  for (int j  = 1; j <=i; j++)
  {
     cout<<"*";
  }
  
  cout<<endl;

}

    
 }