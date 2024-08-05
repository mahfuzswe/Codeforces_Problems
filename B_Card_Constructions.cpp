#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin >> t;

    vector<int> s;
    int cards = 0;
    for (int i = 1; i <= 30000; ++i) {
        cards += 2 * i;
        s.push_back(cards);
        cards += i;
    }

    while (t--) {
        int n; cin >> n;

        int ans = 0;
        while (n >= 2) {
            ans++;
            auto it = prev(upper_bound(s.begin(), s.end(), n));
            n -= *it;
        }
        cout << ans << '\n';
    }

    return 0;
}