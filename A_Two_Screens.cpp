#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    vector<int>cnt;

    for(int i = 0; i < n; ++i){
        int tmp = 0;
        for(int j = 0; j < n; ++j){
            if(s[i] == t[j]) tmp++;
        }
        cnt.push_back(tmp);
    }

    for(auto it: cnt) cout << it << " ";
    cout << '\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t; 
    while(t--){
        solve();
    }
    
    return 0;
}