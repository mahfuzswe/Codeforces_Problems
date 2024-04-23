#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int>ans(n, 0);

        ans[0] = (1 << (31 - __builtin_clz(k+1)))-1;
        ans.back() += k-ans[0];

        for(auto &x : ans) cout << x << " ";
        cout << '\n';
    }

    return 0;
}