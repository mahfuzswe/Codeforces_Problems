#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr, arr+n);
        
        int ck = 0;
        for(int i=0; i<n-1; i++){
            int k = i+1;
            if(arr[k] - arr[i] > k){
                ck++;
            }
        }

        cout << n - ck << '\n';

    }

    return 0;
}