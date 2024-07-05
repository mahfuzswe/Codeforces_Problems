#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int>v(n);

        for(int i = 0; i < n; i++) cin >> v[i];
        vector<int>tmp;
        for(int i = 1; i < n; i++){
            if(v[i-1] > v[i]){
                int x = v[i-1] - v[i];
                tmp.push_back(x);
                v[i] = v[i-1];
            }
        }
        sort(tmp.begin(), tmp.end());
        int k = tmp.size();
        int store = 0;
        int ans = 0;

        for(int i = 0; i < tmp.size(); i++){
            ans += (tmp[i] - store) * (k+1);
            store = tmp[i];
            k--;
        }

        cout << ans << '\n';

    }
    
    return 0;
}