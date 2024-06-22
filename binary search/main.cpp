#include<iostream>
using namespace std;

int binary(int a[],int l, int h,int n,int k){
   // l=a[0];
   // h=a[n-1];
    int mid= l+(h-l)/2;
   // int mid2= h-(h-mid)/3;
    
    if(a[mid]==k)
        return mid;
    //else if(a[mid2]==k)
      //  return mid2;
   // else if(a[mid2]<k)
       // return binary(a,mid2+1,h,n,k);
    else if(a[mid]>k)
        return binary(a,l,mid-1,n,k);
    
    else
        return binary(a,mid+1,h,n,k);
    
    
    
    return -1;
}

int main(){
    int arr[]={2,3,3,4,5,7,29,45,56,77,89,123,345,677,890,8888,8999};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=123;
    int low=0,high=n-1;
    cout<<binary(arr,low,high,n-1,k);
}



