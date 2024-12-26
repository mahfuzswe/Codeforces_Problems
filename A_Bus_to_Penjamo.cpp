#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n, r; 
    cin >> n >> r;
    
    int seat = 2*r;
    int pple = 0;

    int ar[n];
    for(int i = 0; i < n; ++i){
        cin >> ar[i];
        pple += ar[i];
    } 
    
    int ans = 0;

    for(int i = 0; i < n; ++i){
        while(ar[i] >= 2){
            ar[i] -= 2;
            ans += 2;
            pple -= 2;
            seat -= 2;
        }
    }

    int row = seat /= 2;
    while(pple > row){
        pple -= 2;
        seat -= 2;
        row--;
    }
    ans += pple;

    cout << ans << '\n';
}

signed main(){
    int t; cin >> t; 
    while(t--){
        solve();
    }
    
    return 0;
}