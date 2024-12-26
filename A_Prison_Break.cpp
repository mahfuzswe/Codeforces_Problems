#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;


// Practice like you've never won, Perform like you've never lost. 

signed main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--){
        int n, m, r, c;
        cin >> n >> m >> r >> c;

        int d1 = abs(r - 1) + abs(c - 1);
        int d2 = abs(r - 1) + abs(c - m);
        int d3 = abs(r - n) + abs(c - 1);
        int d4 = abs(r - n) + abs(c - m);

        int ans = max({d1, d2, d3, d4});
        cout << ans << '\n';
    }
    
    return 0;
}