#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n, k; 
    cin >> n >> k;

    vector<int>a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int corrPos = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == corrPos+1){
            corrPos++;
        }
    }

    int baki = n - corrPos;
    int lagbe = (baki + k - 1) / k; // ceil(remaining / k)

    cout << lagbe << '\n';
}

signed main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    
    return 0;
}