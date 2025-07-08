//   to cheack weather the array is sorted or nt 

#include <iostream> 
using namespace std ;
 
bool issorted(int arr[] , int n ){
    for(int i = 0 ; i<n ; i ++){

        if(arr[i]> arr[i+1]) {
            return false; 
        
        }

    }

    return true ;
  

}

int main(){

    int n = 5 ;
    int arrr[n] = {1,3,2,5,4};
     
    if (issorted(arrr , n))
    {
        cout<<"sorted";
    } else {
        cout<<"unsorted";
    }
    
 return 0 ; 
}