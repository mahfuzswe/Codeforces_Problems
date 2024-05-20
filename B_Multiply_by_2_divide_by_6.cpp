#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int e2 = 0, e3 = 0;
        while(n % 2 == 0) n /= 2, ++e2;
        while(n % 3 == 0) n /= 3, ++e3;

        if(n > 1 || e2 > e3) cout << -1 << '\n';
        else cout << e3 - e2 + e3 << '\n';
    }

    return 0;
} 