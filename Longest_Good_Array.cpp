#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int l, r;
    cin >> l >> r;

    if(l == r){
        cout << 1 << '\n';
        return;
    }

    vector<int>v;
    int j = 0;
    while(l <= r){ // 1 2 4 
        l += j;
        j++;
        if(l <= r) v.push_back(l);
        else continue;
    }
    
    // for(auto u : v) cout << u << ' ';
    // cout << '\n';

    cout << v.size() << '\n';
}

signed main(){
    int t; cin>> t;
    while(t--){
        solve();
    }
    
    return 0;
}