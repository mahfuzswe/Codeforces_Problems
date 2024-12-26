#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int t; cin >> t;
    while(t--){
        int n, m, r, c, r_d, c_d;
        cin >> n >> m >> r >> c >> r_d >> c_d;

        int ans = abs(r - r_d) + abs(c - c_d);
        cout << ans << '\n';
    }

    return 0;
}