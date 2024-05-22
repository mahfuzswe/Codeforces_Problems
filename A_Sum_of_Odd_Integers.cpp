#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        cout << (k <= n/k and n%2 == k%2 ? "YES\n" : "NO\n"); 
    }

    return 0;
}