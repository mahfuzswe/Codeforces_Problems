#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    while(t--){
        int a, b, m; cin >> a >> b >> m;
        cout << (m/a+1) + (m/b+1) << '\n';
    }

    return 0;
}