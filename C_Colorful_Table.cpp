#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n, k; cin >> n >> k;
    set<int>st;

    vector<vector<int>>adj(k+1);
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        adj[x].push_back(i);
    }

    vector<int>ans(k+1);
    for(int i = k; i >= 1; --i){
        if(adj[i].size() == 0){
            ans[i] = 0;
            continue;
        }
        for(auto &u: adj[i]) st.insert(u);
        ans[i] = 2 * (*st.rbegin() - *st.begin() + 1);
    }

    for(int i = 1; i <= k; ++i){
        cout << ans[i] << ' ';
    }cout << '\n';
}

signed main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);
    
    int t; cin >> t; 
    while(t--){
        solve();
    }
    
    return 0;
}