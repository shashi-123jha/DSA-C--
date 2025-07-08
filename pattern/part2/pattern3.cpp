#include<iostream>
using namespace std ;

int main() {

/*
1
2 2 
3 3 3
4 4 4 4 
5 5 5 5 5 
     
*/
// hear i defined n as 1 
int n = 1 ; 
// this will define the number of the row 
for (int i = 1; i <=5; i++)
{

    //this  will define the number of the column 
for (int j = 1; j<=n; j++)
{
    /* code */
    // hear due to the conditions i made so the first row will have only one column and the evntually it will in by on the row is is aid j++
    cout<<n<<" ";
}
cout<<endl;
n = n+1 ; 

}


 
}