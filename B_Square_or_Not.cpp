#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    int x = sqrt(n);
    int cnt1 = count(s.begin(), s.end(), '1');

    // cout << cnt1 << '\n';

    if(x*x == n){
        if((x*2 + (x-2)*2) == cnt1) cout << "Yes\n";
        else cout << "No\n";
    } 
    else cout << "No\n";
}

signed main(){
    int t; cin>> t;
    while(t--){
        solve();
    }
    
    return 0;
}