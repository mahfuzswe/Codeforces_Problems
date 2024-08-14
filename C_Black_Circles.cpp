#include<bits/stdc++.h>
using namespace std;
#define int long long

// Inquilab Zindabad

signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>x(n), y(n);
        for(int i = 0; i < n; ++i) cin >> x[i] >> y[i];

        int xs, ys, xt, yt;
        cin >> xs >> ys >> xt >> yt;

        int mx = (xs - xt) * (xs - xt) + (ys - yt) * (ys - yt);

        bool ck = 1;
        for(int i = 0; i < n; ++i){
            int ck1 = (xs - x[i]) * (xs - x[i]) + (ys - y[i]) * (ys - y[i]);
            int ck2 = (xt - x[i]) * (xt - x[i]) + (yt - y[i]) * (yt - y[i]);

            if(ck1 <= 0 or ck2 <= mx){
                ck = 0;
                break;
            }
        }
        cout << (ck ? "YES" : "NO") << '\n';
    }

    return 0;
}