#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;


signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>p(n);
        int even = 0, odd = 0;
        for(int i = 0; i < n; ++i){
            cin >> p[i];
            if(p[i] % 2 == 0) even++;
            else odd++;
        }

        int m; cin >> m;
        vector<int>q(m);

        int ans = 0;
        for(int i = 0; i < m; ++i){
            cin >> q[i];
            if(q[i] % 2 == 0) ans += even;
            else ans += odd;
        }
        cout << ans << '\n';
    }
    
    return 0;
}