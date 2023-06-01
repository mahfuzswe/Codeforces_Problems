#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
    int t = 1; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        vector<ll> v(n),v1(n+1);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        } sort(v.begin(), v.end()); 

        for(int i = n - 1; i >= 0; i--) {
            v1[i] = v1[i+1] + v[i];
        } ll ans = v1[n - k];ll cur = 0;
        
        for(int i = 1; i <= k; i++) {
            cur += v[i * 2 - 2] + v[i * 2 - 1];
            ans = min(ans, cur + v1[n - k + i]);
        } cout << v1[0] - ans << "\n"; 
    }
}
