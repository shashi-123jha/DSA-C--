#include<iostream>

using namespace std ; 

int main(){
/*
1
2 1
3 2 1 
4 3 2 1 
5 4 3 2 1 
*/


int n = 1 ; 
for (int i = 1; i <=5; i++)
{
    for (int j = n; j >=1; j--)
    {
     cout<<j<<" ";
    }
    cout<<endl;
    n = n+1;
    
}





}