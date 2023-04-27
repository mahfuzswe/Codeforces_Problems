#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        sort(arr,arr+n);
        cout<<max(1LL*arr[n-2]*arr[n-1],1LL*arr[0]*arr[1])<<endl;
        //The "1LL" before the multiplication is used to convert
        //the result to a 64-bit integer to prevent overflow.
    }

    return 0;
}
