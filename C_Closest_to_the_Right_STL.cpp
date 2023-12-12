#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, q; cin>>n>>q;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    while(q--){
        int target; cin>>target;
        int lb = lower_bound(arr, arr+n, target) - arr; 
        cout<<lb+1<<'\n';
    }
    
    return 0;
}