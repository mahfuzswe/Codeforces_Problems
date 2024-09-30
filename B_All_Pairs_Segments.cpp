#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    
    map<int, int>mp;
    for(int i = 0; i < n; ++i){
        int cl = (i + 1) * (n - i) - 1;
        mp[cl]++;

        if(i > 0){
            int cl2 = (n - i) * i;
            mp[cl2] += (a[i] - a[i-1] - 1);
        }
    }

    while(q--){
        int k; cin >> k;
        if(mp.find(k) == mp.end()) cout << 0 << " ";
        else cout << mp[k] << " ";
    }
    cout << '\n';
}

signed main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}