#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n, k; cin >> n >> k;
    if(k == 1){
        cout << n << '\n';
        return;
    }  
    int ans = 0;
    while(n){
        ans += n%k;
        n /= k;
    }
    cout << ans << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}