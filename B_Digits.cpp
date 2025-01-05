#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n, d;
    cin >> n >> d;

    int x = 1;
    for(int i = 1; i <= n && i <= 10; i++) x = x * i;

    cout << 1 << ' ';
    if(x * d % 3 == 0) cout << 3 << ' ';
    if(d == 5) cout << 5 << ' ';
    if(d == 7 || x % 6 == 0) cout << 7 << ' ';
    if(x * d % 9 == 0) cout << 9 << ' ';
    cout << '\n';
}

signed main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}