#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int n; cin >> n;
    int a, b, c;
    cin >> a >> b >> c;

    if(n == 1){
        cout << 0 << '\n';
        return 0;
    }

    int ans = min(a, b) + min({a, b, c}) * (n-2);
    cout << ans << '\n';
    
    return 0;
}