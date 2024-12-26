#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n;cin >> n;
    int ans = 1;
    while(n > 3){
        n /= 4;
        ans *= 2;
    }
    cout << ans << '\n';
}

signed main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}