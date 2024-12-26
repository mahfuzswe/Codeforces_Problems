#include<bits/stdc++.h>
using namespace std;
#define int int64_t
const int MOD = 1e9 + 7;

void solve(){
    int k, l = 1, r = 2e18;
    cin >> k;
    while(r - l > 1){
        int mid = l + (r - l) / 2;
        int n = mid - static_cast<int>(sqrt(mid));

        if(n >= k) r = mid;
        else l = mid;
    }

    cout << r << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}