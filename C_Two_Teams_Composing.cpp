#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        map<int, int>m;
        for(auto i: v) m[i]++;

        int mx = 0;
        for(auto i: m){
            mx = max(mx, i.second);
        }

        int diff = m.size();
        if(mx == diff) cout << mx - 1 << '\n';
        else if(mx > diff) cout << min(mx-1, diff) << '\n';
        else cout << min(mx, diff-1) << '\n';
    }


    return 0;
}