#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; ++i){
            int x; cin >> x;
            mp[x]++;
        }

        int maxi = 0;
        for(auto [a, b] : mp) maxi = max(maxi, b);

        cout << n - maxi << '\n'; 
    }
    
    
    return 0;
}