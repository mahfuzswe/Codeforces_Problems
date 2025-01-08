#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k; cin >> n >> k;
    vector<int>a(n+1);
    map<int, int>mp;
    int cnt = 0;

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        if(mp[a[i]] == 0) cnt++;
        mp[a[i]]++;
    }

    vector<int>v;
    for(int i = 1; i <= n; ++i){
        if(mp[a[i]]){
            v.push_back(mp[a[i]]);
            mp[a[i]] = 0;
        }
    }

    sort(v.begin(), v.end());
    for(auto go: v){
        if(cnt == 1 or k < go) break;
        k -= go;
        cnt--;
    }
    cout << cnt << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        solve();
    }
}