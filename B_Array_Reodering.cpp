#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        int cnt = 0;
        for(int i=1; i<=n; i++){
            if(__gcd(arr[i], 2*arr[i+1]) > 1) cnt++;
        }
        cout << cnt*cnt << '\n';
    }

    return 0;
}