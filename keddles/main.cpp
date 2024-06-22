#include <iostream>
using namespace std;

void solve();
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
        // your code goes here
       
void solve(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=1;i<n;i++){
        if(A[i]<A[i-1]) {
            cout<<"NO";
           return;
        }
        
    }
    cout<<"YES";
    
}


