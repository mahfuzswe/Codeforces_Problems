#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int>v(k);
        for(auto &x: v) cin >> x;

        sort(v.begin(), v.end());

        int ans = 0;
        for(int i = 0; i < k - 1; ++i){
            ans += 2 * v[i] - 1;
        }

        cout << ans << '\n';
    }
}