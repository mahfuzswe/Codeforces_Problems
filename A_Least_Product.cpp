#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; ++i) cin >> v[i];

        int pos = 0, neg = 0;
        bool ck = true;
        for(auto x : v){
            if(x == 0){
                cout << 0 << '\n';
                ck = false;
                break;
            }
            if(x > 0) pos++;
            else neg++;
        }

        if(ck){
            if(neg & 1){
                cout << 0 << '\n';
            }
            else{
                cout << 1 << '\n';
                cout << 1 << " " << 0 << '\n';
            }
        }
    }
    
    return 0;
}