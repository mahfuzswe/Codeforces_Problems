#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        int mn = 1;
        int mx = 10000000000;

        vector<int>v;

        while(n--){
            int a, x; cin >> a >> x;

            if(a == 1) mn = max(mn, x);
            if(a == 2) mx = min(mx, x);
            if(a == 3) v.push_back(x);
        }

        int pos = 0;
        int ans = mx - mn + 1;
        if(ans < 0) ans = 0;

        for(auto x : v){
            if(x >= mn && x <= mx) ans--;
        }

        cout << ans << '\n';
    }

    return 0;
}