// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int ans = 0;
    int i;
    for(i = n - 2; i >= 0; i--){
        if(v[i+1] == 0){
            break;
        }
        while(v[i] >= v[i+1]){
            v[i] /= 2;
            ans++;
        }
    }
    if(i >= 0) cout << "-1\n";
    else cout << ans << '\n';
}

// what to think | how to think | don't be stupid
signed main(){
    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}