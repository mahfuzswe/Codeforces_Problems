#include<bits/stdc++.h>
using namespace std;

#define int long long

int kk (int sum, int n){
    if(sum == n) return 0;
    else if(sum < 0) return 1;
    else return sum - n;
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >>n;
        int arr[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >>arr[i];
            sum += arr[i];
        }
        int ans = kk(sum , n);
        if(ans < 0) cout << 1 << '\n';
        else cout << ans << '\n';
    }

    return 0;
}