#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int n; cin >> n;
    string s; cin >> s;

    map<string, int>mp;
    for(int i = 0; i < n-1; ++i){
        mp[s.substr(i, 2)]++;
    }

    int mx = -1;
    string ans;

    for(auto &x: mp){
        if(x.second > mx){
            mx = x.second;
            ans = x.first;
        }
    }

    cout << ans << '\n';
    
    return 0;
}