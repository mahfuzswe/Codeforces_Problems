#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        if((n%2 == 1 and k%2 == 1) or (n%2 == 0 and k%2 == 0)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}