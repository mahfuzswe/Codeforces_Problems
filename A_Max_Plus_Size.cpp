#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    
    int sum1 = 0, sum2 = 0, m1 = 0, m2 = 0;
    for(int i = 0; i < n; i += 2){
        sum1++;
        m1 = max(m1, a[i]);
    }

    for(int i = 1; i < n; i += 2){
        sum2++;
        m2 = max(m2, a[i]);
    }

    cout << max(sum1+m1, sum2+m2) << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    int t; cin >> t; 
    while(t--){
        solve();
    }
    
    return 0;
}