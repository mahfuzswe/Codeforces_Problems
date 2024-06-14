// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n; cin >> n;
    int mxi = -1;
    int ans;
    for(int i = 2; i <= n; i++){
        int sum = 0;
        for(int j = i; j <= n; j += i){
            sum += j;
        }
        if(sum > mxi){
            mxi = sum;
            ans = i;
        }
    }
    cout << ans << '\n';
}

// what to think | how to think | don't be stupid
signed main(){
    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}