 //  linear searrch :- 

//hear we are given the arra and we have to find that given using the linesr sesrch mrthord 

#include <iostream>
using namespace std ; 

int linearsearch(int arr[] , int number , int n){
   
    int i ;
    for( i= 0 ; i<n; i++){
        if (arr[i] == number)
        {
            cout<<"the positin of the matches number is"<<i << endl << "the found number"<<number<<endl;

        }
        

    }
}

int main(){
    int n =5;
    int number = 9;
    int arr[n] = {1,3,5,7,9};
    
    int result = linearsearch(arr , number , n);
    cout<<result ;

    return 0 ; 
}