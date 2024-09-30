#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        int mn = INT_MAX;
        
        for(int i = a; i <=b; ++i){
            int x = (i - a) + (b - i);
            mn = min(x, mn);
        }
        cout << mn << '\n';
    }
    
    return 0;
}