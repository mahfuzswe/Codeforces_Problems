#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int x; 
        map<int, int>mp;
        for(int i=1; i<=n; i++){
            cin >> x;
            x -= i;
            mp[x]++;
        }

        int ans = 0;
        for(auto it: mp){
            int a = it.second;
            ans += (a*(a-1))/2;
        }

        cout << ans << '\n';
    }

    return 0;
}