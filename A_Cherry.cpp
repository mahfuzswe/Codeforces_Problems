#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        set<int>s;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            s.insert(x);
        }

        int k = s.size();

        vector<int>v;

        for (auto it = s.begin(); it != s.end(); it++) {
            v.push_back(*it);
        }

        int ss = v.size();


        int ans;

        if(ss == 1){
            ans = v[0] * v[0];
        }else{
            ans = v[ss-1] * v[ss-2];
        }

        cout << ans << '\n';

        // for(int i=0; i<ss; i++){
        //     cout << v[i] << " ";
        // }
        // cout << '\n';

    }

    return 0;
}