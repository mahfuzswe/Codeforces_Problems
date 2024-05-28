// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



// what to think | how to think | don't be stupid
signed main(){

    int n, m; cin >> n >> m;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int tmp = i % 5;
        tmp = (m+tmp)/5;
        ans += tmp;
    }
    cout << ans << '\n';

    return 0;
}