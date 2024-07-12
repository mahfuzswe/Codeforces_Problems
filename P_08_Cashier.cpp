#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int n, l, a, prev = 0;
    cin >> n >> l >> a;

    int ans = 0;
    while(n--){
        int x, y; cin >> x >> y;
        ans += (x - prev) / a;
        prev = x + y;
    }
    cout << ans + (l-prev) / a << '\n';

    return 0;
}