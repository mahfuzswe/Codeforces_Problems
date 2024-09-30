#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n; cin >> n;

    for(int i = 1; i <= n; ++i){
        cout << i;
        for(int j = n; j > 0; --j){
            if(i != j) cout << " " << j;
        }cout << '\n';
    }
}

signed main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}