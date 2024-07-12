#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, l, a;
    cin >> n >> l >> a;

    int ans = 0;
    int i = 0;
    while(n--){
        int t, e; cin >> t >> e;

        int diff = (t - i);
        ans += diff / a;

        i = (t + e);
    }
    ans += (l - i) / a;
    cout << ans << '\n';

    return 0;
}