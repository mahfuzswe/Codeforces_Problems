#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

int ceil_div(int a,int b){return a/b + ((a^b)>0 && a%b != 0);}

void solve(){
    int x, y, k;
    cin >> x >> y >> k;

    x = ceil_div(x, k);
    y = ceil_div(y, k);

    cout << max(2*x - 1, 2*y) << '\n';
    
}

signed main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}