#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;


signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        for(int i =0; i < n; ++i) cin >> v[i];

        vector<int>t = v;

        int mxIdx = max_element(v.begin(), v.end()) - v.begin();

        // remove max form t
        t.erase(t.begin()+mxIdx);
        int s_mx = *max_element(t.begin(), t.end());


        for(int i = 0; i < n; ++i){
            if(v[i] < v[mxIdx]) cout << v[i] - v[mxIdx] << " ";
            else cout << v[mxIdx] - s_mx << " ";
        }
        cout << '\n';
    }
    
    return 0;
}