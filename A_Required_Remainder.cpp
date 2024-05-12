#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int x, y, n; cin >> x >> y >> n;
        int p = (n-y)/x;
        int k = (p*x) + y;
        
        cout << k << '\n';
    }

    return 0;
}