#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

// Inquilab Zindabad

signed main() {
    int t; 
    cin >> t;
    while (t--) {
        int l, r; 
        cin >> l >> r;

        int ans = 0, mn = -1;
        for (int x = 1, multiplier = 1; x <= r; x *= 3, ++multiplier) {
            if (l >= x) {
                mn = multiplier;
            }
            int lower_bound = max(1, x);
            int upper_bound = min(r, 3 * x - 1);
            int range = max(0, upper_bound - lower_bound + 1);
            ans += range * multiplier;
        }
        ans += mn;
        cout << ans << '\n';
    }

    return 0;
}