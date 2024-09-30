#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;


signed main(){
    int t; cin >> t;
    while(t--){
        int a, b; 
        cin >> a >> b;

        int ans = INT_MAX;
        for(int i = 0; i*i <= a; ++i){
            if(b == 1 and i == 0) continue;

            int cnt = i;
            int tmp = a;
            while(tmp){
                tmp /= (b + i);
                cnt++;
            }
            ans = min(ans, cnt);
        }
        cout << ans << '\n';
    }
    
    return 0;
}