#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin >> t;
    while(t--){
        int a, b, s, e; cin >> a >> b;

        s = min(a, b);
        e = max(a, b);

        int f_sum = 0, s_sum = 0;

        s--;
        f_sum = (s*(s+1))/2;
        s_sum = (e*(e+1))/2;

        int ans = s_sum - f_sum;
        cout << ans << '\n';

    }
}