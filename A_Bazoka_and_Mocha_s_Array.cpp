#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;


// Practice like you've never won, Perform like you've never lost. 

signed main(){
    cin.tie(0) -> ios_base::sync_with_stdio(0);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[2*n+1];
        for(int i = 1; i<= n; ++i){
            cin >> a[i];
            a[n+i] = a[i];
        }

        bool ck = 0;
        for(int i = 1; i <= n; ++i){
            if(is_sorted(a+i, a+i+n)){
                ck = 1;
                break;
            }
        }
        if(ck) cout << "Yes\n";
        else cout << "No\n";
    }
    
    return 0;
}