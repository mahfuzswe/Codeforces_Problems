#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        string s; cin >> s;
        
        int cnt = 1;
        for(int i = 1; i < n; ++i){
            if(s[i] != s[i-1]) cnt++;
        }

        int ans = a*n + max(n*b , (cnt/2 + 1)*b);
        cout << ans << '\n'; 

    }
    
    return 0;
}