#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int t; cin>>t;
    while(t--){
        int l, r; cin >> l >> r; // alice
        int L, R; cin >> L >> R; // bob

        int lx = max(l, L);
        int rx = min(r, R);

        if(lx > rx){
            cout << 1 << '\n';
            continue;
        }

        int ans = rx - lx;
        if(l != L) ans++;
        if(r != R) ans++;

        cout << ans << '\n';
    }
    
    return 0;
}