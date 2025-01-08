#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k; 
    cin >> n >> k;

    if(k < 33) cout << min(n+1, (1LL << k)) << '\n';
    else cout << n + 1 << '\n';
}

int32_t main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}