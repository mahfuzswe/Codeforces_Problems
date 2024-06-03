#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



// what to think | how to think | don't be stupid
signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n; int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];

        int cntPos = 0, cntNeg = 0;
        for(int i=0; i<n-1; i++){
            if(arr[i] < arr[i+1]) cntPos++;
            if(arr[i] > arr[i+1]) cntNeg++;
        }
`
        

    }

    return 0;
}