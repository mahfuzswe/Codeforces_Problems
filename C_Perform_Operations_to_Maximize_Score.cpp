#include<bits/stdc++.h>
using namespace std;
#define int long long

// Inquilab Zindabad

signed main(){
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i = 1; i <= n; ++i) {
            int x; cin >> x;
            if(n == x) x = 1;
            else x++;
            cout << x << " ";
        }cout << '\n';
    }

    return 0;
}