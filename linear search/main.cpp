
#include <iostream>
using namespace std;

int linear(int a[],int n,int k ){
    // int m= l+(h-l)/2;
    
    for(int i=0; i<n;i++)
        
        if(a[i]==k)
            return i;
    
    
    
            return -1;
}
    

int main(){
    int arr[]={3,4,5,3,9,6,70,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout<<linear(arr,n,k);
    
}
